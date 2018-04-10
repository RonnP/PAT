/**
 * Created by Ronn on 3/19/18
 * 1085. PAT单位排行
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
	char name[10];
	double score;
	int cnt;
} node;

int cmp(const void *pa, const void *pb) {
	node a = *(node *) pa;
	node b = *(node *) pb;
	if (a.score != b.score)
		return b.score > a.score ? 1 : -1;
	if (a.cnt != b.cnt)
		return a.cnt - b.cnt;
	return strcmp(a.name, b.name);
}

int cmpName(const void *pa, const void *pb) {
	node a = *(node *) pa;
	node b = *(node *) pb;
	return strcmp(a.name, b.name);
}

int main() {
	int n;
	scanf("%d", &n);
	node stus[n], scos[n];
	for (int i = 0; i < n; i++) {
		char id[10], name[10], c;
		double score;

		scanf("%s %lf", id, &score);
		getchar();
		int j = 0;
		while ((c = getchar()) != '\n') {
			if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
			name[j++] = c;
		}
		name[j] = '\0';


		if (id[0] == 'B') score /= 1.5;
		else if (id[0] == 'T') score *= 1.5;

		stus[i].score = score;
		strcpy(stus[i].name, name);

		scos[i].cnt = 0;
		scos[i].score = 0;
	}
	qsort(stus, n, sizeof(node), cmpName);

	int t = 0;
	for (int i = 0; i < n; i++) {
		scos[t].cnt++;
		scos[t].score += stus[i].score;
		strcpy(scos[t].name, stus[i].name);

		if (strcmp(stus[i].name, stus[i + 1].name) != 0) {
			int temp = scos[t].score;
			scos[t].score = temp;
			t++;
		}
	}
	qsort(scos, t, sizeof(node), cmp);

	int p = 1;
	printf("%d\n", t);
	for (int i = 0; i < t; i++) {
		if (i && scos[i].score != scos[i - 1].score) p = i + 1;
		printf("%d %s %.0f %d\n", p, scos[i].name, scos[i].score, scos[i].cnt);
	}
	return 0;
}