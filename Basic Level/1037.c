/**
 * Created by Ronn on 1/19/18
 * 1037. 在霍格沃茨找零钱
 */
#include <stdio.h>

int main() {
	int p[3], a[3];
	scanf("%d.%d.%d %d.%d.%d", &p[0], &p[1], &p[2], &a[0], &a[1], &a[2]);
	int pSum = 29 * 17 * p[0] + 29 * p[1] + p[2];
	int aSum = 29 * 17 * a[0] + 29 * a[1] + a[2];

	int result = aSum - pSum;
	int flag = result > 0 ? 1 : -1;
	result *= flag;

	int r[3];
	r[0] = result / 29 / 17;
	result %= 29 * 17;
	r[1] = result / 29;
	result %= 29;
	r[2] = result;

	printf("%d.%d.%d", r[0] * flag, r[1], r[2]);
	return 0;
}