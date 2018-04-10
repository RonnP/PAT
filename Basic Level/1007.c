/**
 * Created by Ronn on 12/20/17
 * 1007. 素数对猜想
 */
#include <stdio.h>
#include <math.h>

//判断素数
int isPrime(int p) {
	for (int i = 3; i <= sqrt(p); i++) {
		if (p % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n, cnt = 0, flag = 0;
	scanf("%d", &n);
	for (int i = 3; i <= n - 2; i += 2) {
		if (isPrime(i) && isPrime(i + 2)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}