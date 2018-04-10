/**
 * Created by Ronn on 2/2/18
 * 1056. 组合数的和
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			sum += arr[i] * 10 + arr[j];
		}
	}

	printf("%d", sum);
	return 0;
}