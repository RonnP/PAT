/**
 * L1-028. 判断素数
 * Created by Ronn on 3/6/18
 */
#include <iostream>
#include <cmath>

using namespace std;

bool iPrime(int n) {
	if (n == 1) return false;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}

	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		iPrime(temp) ? cout << "Yes" : cout << "No";
		cout << endl;
	}
	return 0;
}