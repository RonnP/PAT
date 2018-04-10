/**
 * Created by Ronn on 12/27/17
 * 1070. 结绳
 */
#include <stdio.h>
#include <stdlib.h>

// 升序
int cmp(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), cmp);
	int result = arr[0];
	for (int i = 1; i < n; i++)
		result = (result + arr[i]) / 2;

	printf("%d", result);
	return 0;
}