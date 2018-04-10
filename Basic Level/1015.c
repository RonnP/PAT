/**
 * Created by Ronn on 12/28/17
 * 1015. 德才论
 */
#include <stdio.h>
#include <stdlib.h>

int h;
typedef struct node {
	int id;
	int de;
	int cai;
	int total;
} ex;

int sort(int de, int cai) {
	if (de >= h)//圣人:君子
		return cai >= h ? 1 : 2;
	else//愚人:其余
		return de >= cai ? 3 : 4;
}

int cmp(const void *pa, const void *pb) {
	struct node *a, *b;
	a = (ex *) pa;
	b = (ex *) pb;

	int sa = sort(a->de, a->cai);
	int sb = sort(b->de, b->cai);
	if (sa != sb)
		return sa - sb;
	else if (a->total != b->total)//按总分排序
		return b->total - a->total;
	else if (a->de != b->de)//按德排序
		return b->de - a->de;
	else//按学号排序
		return a->id - b->id;
}

int main() {
	int n, l;
	scanf("%d %d %d", &n, &l, &h);

	ex nodes[n];
	for (int i = 0; i < n; i++) {
		int id, de, cai;
		scanf("%d %d %d", &id, &de, &cai);
		if (de < l || cai < l) {
			n--;
			i--;
		} else {
			nodes[i].id = id;
			nodes[i].de = de;
			nodes[i].cai = cai;
			nodes[i].total = de + cai;
		}
	}

	qsort(nodes, n, sizeof(ex), cmp);

	printf("%d\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", nodes[i].id, nodes[i].de, nodes[i].cai);
	}
	return 0;
}