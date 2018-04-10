/**
 * Created by Ronn on 12/21/17
 * 1008. 数组元素循环右移问题
 */
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n];
	if (m > n) m = m % n;
	for (int i = 0; i < n; i++) {
		int temp = i + m;
		temp = temp >= n ? temp - n : temp;
		scanf("%d", &a[temp]);
	}

	printf("%d", a[0]);
	for (int i = 1; i < n; i++) {
		printf(" %d", a[i]);
	}

	return 0;
}