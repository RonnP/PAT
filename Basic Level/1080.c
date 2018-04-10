/**
 * Created by Ronn on 12/29/17
 * 1080. MOOC期终成绩
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu {
	char *id;
	int g1, g2, g3, g;
} stu;

int cmpBs(const void *a, const void *b) {
	return strcmp((char *) a, ((stu *) b)->id);
}

int cmpId(const void *a, const void *b) {
	return strcmp(((stu *) a)->id, ((stu *) b)->id);
}

int cmp(const void *a, const void *b) {
	return ((stu *) b)->g - ((stu *) a)->g;
}

int main() {
	int p, m, n, cnt = 0;
	scanf("%d %d %d", &p, &m, &n);
	stu stus[p];


	for (int i = 0; i < p; i++) {
		char id[20];
		int g1;
		scanf("%s %d", id, &g1);
		if (g1 >= 200) {
			stus[cnt].id = strdup(id);
			stus[cnt].g1 = g1;
			stus[cnt].g2 = -1;
			stus[cnt].g3 = -1;
			stus[cnt].g = 0;
			cnt++;
		}
	}
	qsort(stus, cnt, sizeof(stu), cmpId);

	for (int i = 0; i < m; i++) {
		char id[20];
		int g2;
		scanf("%s %d", id, &g2);

		stu *s;
		s = (stu *) bsearch(id, stus, cnt, sizeof(stu), cmpBs);
		if (s != NULL)s->g2 = g2;
	}

	for (int i = 0; i < n; i++) {
		char id[20];
		int g3, g2;
		scanf("%s %d", id, &g3);

		stu *s;
		s = (stu *) bsearch(id, stus, cnt, sizeof(stu), cmpBs);
		if (s != NULL) {
			g2 = s->g2;
			double g = g3;
			if (g2 > g3) g = g2 * 0.4 + g3 * 0.6;
			s->g3 = g3;
			s->g = (int) (g + 0.5);
		}
	}

	qsort(stus, cnt, sizeof(stu), cmp);
	for (int i = 0; i < cnt; i++) {
		if (stus[i].g < 60) continue;
		printf("%s %d %d %d %d\n", stus[i].id, stus[i].g1, stus[i].g2, stus[i].g3, stus[i].g);
	}
	return 0;
}