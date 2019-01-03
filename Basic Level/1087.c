/**
 * 1087 有多少不同的值
 * Created by Ronn on 9/9/18
 */

#include <stdio.h>

int main() {
	int n, max = -1, t = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int sum = i / 2 + i / 3 + i / 5;
		if (sum > max) {
			t++;
			max = sum;
		}
	}

	printf("%d", t);
	return 0;
}