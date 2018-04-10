/**
 * L1-006. 连续因子
 * Created by Ronn on 3/2/18
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long n;
	cin >> n;
	long max = sqrt(n);
	for (int i = 12; i >= 1; i--) {
		for (int j = 2; j <= max; j++) {
			long sum = 1;
			for (int k = j; k < i + j; k++)
				sum *= k;
			if (n % sum == 0) {
				cout << i << endl << j;
				for (int k = j + 1; k < i + j; k++)
					cout << "*" << k;
				return 0;
			} else if (sum > n) break;
		}

	}

	cout << 1 << endl << n;
	return 0;
}