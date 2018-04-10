/**
 * L1-009. N个数求和
 * Created by Ronn on 3/2/18
 */
#include <iostream>

using namespace std;

//最大公约数
long maxDiv(long m, long n) {
	return n == 0 ? m : maxDiv(n, m % n);
}

int main() {
	long n, sumA, sumB;
	cin >> n;
	scanf("%ld/%ld", &sumA, &sumB);
	for (int i = 1; i < n; i++) {
		int a, b;
		scanf("%d/%d", &a, &b);
		sumA = sumA * b + sumB * a;
		sumB *= b;

		if (sumA != 0) {
			long t = maxDiv(sumA, sumB);
			sumA /= t;
			sumB /= t;
		} else sumB = 1;

	}

	if (sumA < 0) {
		cout << "-";
		sumA *= -1;
	}

	if (sumA >= sumB || sumA == 0) {
		cout << sumA / sumB;
		sumA %= sumB;

		if (sumA != 0) {
			cout << " ";
			long t = maxDiv(sumA, sumB);
			sumA /= t;
			sumB /= t;
		}
	}

	if (sumA != 0)
		printf("%ld/%ld", sumA, sumB);
	return 0;
}