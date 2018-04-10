/**
 * Created by Ronn on 1/17/18
 * 1035. 插入与归并
 */
#include <stdio.h>
#include <stdlib.h>

//升序
int cmp(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);
}

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (i) printf(" ");
		printf("%d", arr[i]);
	}
}

//插入
void insertion(int arr[], int n, int k) {
	qsort(arr, k, sizeof(int), cmp);
	printf("Insertion Sort\n");
	printArr(arr, n);
}


void merge(int a[], int b[], int n) {
	for (int i = 0, j = 0, k = 1; i < n && k <= n; k *= 2) {
		for (i = 0; i < n && a[i] == b[i]; i++);
		for (j = 0; j < n / k; j++)
			qsort(a + j * k, k, sizeof(int), cmp);
		qsort(a + j * k, n % k, sizeof(int), cmp);
	}
	printf("Merge Sort\n");
	printArr(a, n);
}

int main() {
	int n;
	scanf("%d", &n);

	int a[n], b[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	int i, k;
	for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);
	for (k = ++i; i < n && b[i] == a[i]; i++);

	k = i == n ? k + 1 : 0;
	k ? insertion(b, n, k) : merge(a, b, n);
	return 0;
}