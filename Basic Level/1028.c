/**
 * Created by Ronn on 1/10/18
 * 1028. 人口普查
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people {
	char *name;
	int yy, mm, dd;
} p;

int cmp(const void *pa, const void *pb) {
	struct people *a, *b;
	a = (p *) pa;
	b = (p *) pb;

	if (a->yy != b->yy)//按年份排序
		return b->yy - a->yy;
	else if (a->mm != b->mm)//按月份排序
		return b->mm - a->mm;
	else //按日期排序
		return b->dd - a->dd;
}

int main() {
	int n;
	scanf("%d", &n);
	p ps[n];
	int t = 0;
	for (int i = 0; i < n; i++) {
		char name[5];
		int yy, mm, dd;
		scanf("%s %d/%d/%d", name, &yy, &mm, &dd);

		//过滤不合理生日
		if (yy < 1814 || yy > 2014) continue;
		else if (yy == 1814) {
			if (mm < 9) continue;
			if (mm == 9 && dd < 6) continue;
		} else if (yy == 2014) {
			if (mm > 9) continue;
			if (mm == 9 && dd > 6) continue;
		}

		(ps + t)->name = strdup(name);
		(ps + t)->dd = dd;
		(ps + t)->yy = yy;
		(ps + t)->mm = mm;
		t++;
	}

	printf("%d", t);
	if (t != 0) {
		qsort(ps, t, sizeof(p), cmp);
		printf(" %s %s", (ps + t - 1)->name, ps->name);
	}
	return 0;
}