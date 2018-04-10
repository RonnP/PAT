/**
 * Created by Ronn on 1/27/18
 * 1045. 快速排序
 */
#include <stdio.h>
#include <stdlib.h>

//升序
int cmp(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);
}

int main() {
	//接收
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}

	qsort(a, n, sizeof(int), cmp);
	int c[n], max = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i] && b[i] > max)
			c[cnt++] = b[i];

		if (b[i] > max) max = b[i];
	}

	//输出
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++) {
		if (i) printf(" ");
		printf("%d", c[i]);
	}
	printf("\n");
	return 0;
}