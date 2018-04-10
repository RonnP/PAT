/**
 * Created by Ronn on 1/3/18
 * 1021. 个位数统计
 */
#include <stdio.h>

int main() {
	char c;
	int arr[10] = {0};
	while ((c = getchar()) != '\n') {
		int n = c - 48;
		arr[n]++;
	}

	for (int i = 0; i < 10; i++) {
		int n = arr[i];
		if (n != 0) printf("%d:%d\n", i, n);
	}
	return 0;
}