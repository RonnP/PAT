/**
 * Created by Ronn on 1/12/18
 * 1030. 完美数列
 */
#include <stdio.h>
#include <stdlib.h>

//升序
int cmp(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);
}

int main() {
	int n;
	long p;
	scanf("%d %ld", &n, &p);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), cmp);

	int maxLen = 0;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		for (int j = i + maxLen; j < n; j++) {
			if (arr[j] <= arr[i] * p) temp = j - i + 1;
			else break;
		}

		if (temp > maxLen) maxLen = temp;
	}

	printf("%d", maxLen);

	return 0;
}