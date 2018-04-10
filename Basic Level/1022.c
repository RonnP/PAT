/**
 * Created by Ronn on 1/4/18
 * 1022. D进制的A+B
 */
#include <stdio.h>

int main() {
	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);

	int k = a + b, arr[30], t = 0;
	if (k == 0) printf("0");
	while (k != 0) {
		arr[t++] = k % d;
		k /= d;
	}

	for (int i = t - 1; i >= 0; i--)
		printf("%d", arr[i]);
	return 0;
}