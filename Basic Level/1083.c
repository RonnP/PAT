/**
 * Created by Ronn on 3/19/18
 * 1083. 是否存在相等的差
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[10000] = {0};
	for (int i = 1; i <= n; i++) {
		int num;
		scanf("%d", &num);
		num = num - i;
		if (num < 0) num *= -1;
		arr[num ]++;
	}

	for (int i = n; i >= 0; i--) {
		if (arr[i] > 1)
			printf("%d %d\n", i, arr[i]);
	}
	return 0;
}