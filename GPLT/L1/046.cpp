/**
 * L1-046. 整除光棍
 * Created by Ronn on 3/10/18
 */
#include <iostream>

using namespace std;

int main() {
	int x, cnt = 1, a = 1;
	cin >> x;

	while (a / x == 0) {
		a = a * 10 + 1;
		cnt++;
	}

	while (a % x) {
		cout << a / x;
		a = a % x * 10 + 1;
		cnt++;
	}

	printf("%d %d", a / x, cnt);
	return 0;
}