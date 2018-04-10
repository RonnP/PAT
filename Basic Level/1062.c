/**
 * Created by Ronn on 2/8/18
 * 1062. 最简分数
 */
#include <stdio.h>

#define SWAP(A, B){int temp=A; A=B; B=temp;}

//最大公约数
int maxDiv(int m, int n) {
	return n == 0 ? m : maxDiv(n, m % n);
}

//最小公倍数
int minMul(int m, int n) {
	return m * n / maxDiv(m, n);
}

int main() {
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	int mul = minMul(m1, m2), flag = 0, n;
	mul = minMul(mul, k);
	n = mul / k;
	n1 *= mul / m1;
	n2 *= mul / m2;
	if (n1 > n2) SWAP(n1, n2);

	for (int i = n1 + 1; i < n2; i++) {
		int t = 0;
		if (i % n == 0) t = maxDiv(i / n, k);
		if (t == 1) {
			if (flag) printf(" ");
			printf("%d/%d", i / n, k);
			flag = 1;
		}
	}

	return 0;
}