/**
 * Created by Ronn on 3/19/18
 * 1082. 射击比赛
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int id, z;
} node;

int cmp(const void *pa, const void *pb) {
	node a = *(node *) pa;
	node b = *(node *) pb;
	return a.z - b.z;
}

int main() {
	int n;
	scanf("%d", &n);
	node nodes[n];
	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d %d %d", &nodes[i].id, &x, &y);
		nodes[i].z = x * x + y * y;
	}

	qsort(nodes, n, sizeof(node), cmp);
	printf("%04d %04d", nodes[0].id, nodes[n - 1].id);
	return 0;
}