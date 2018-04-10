/**
 * Created by Ronn on 2/6/18
 * 1060. 爱丁顿数
 */
#include <stdio.h>
#include <stdlib.h>

// 降序
int cmp(const void *a, const void *b) {
	return (*(int *) b - *(int *) a);
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), cmp);
	int t = 0;
	while (t <= n && arr[t] > ++t);
	printf("%d", t);
	return 0;
}