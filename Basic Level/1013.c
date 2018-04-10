/**
 * Created by Ronn on 12/26/17
 * 1013. 数素数
 */
#include <stdio.h>
#include <math.h>

//判断是不是素数
int isPrime(int p) {
	if (p <= 1) return 0;
	for (int i = 2; i <= sqrt(p); i++) {
		if (p % i == 0) return 0;
	}
	return 1;
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int i = 0, cnt = 0;
	while (1) {
		if (isPrime(i)) {
			cnt++;
			if (cnt >= m && cnt <= n) {
				printf("%d", i);
				if ((cnt - m + 1) % 10 != 0 && cnt != n) printf(" ");
				else printf("\n");
			}
			if (cnt > n) break;
		}
		i++;
	}
	return 0;
}