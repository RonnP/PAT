/**
 * 1091 N-自守数
 * Created by Ronn on 12/10/18
 */

#include <iostream>

using namespace std;

// 找到自守数则返回
int fun(int temp) {
	int p = 10;
	if (temp > 10) p = 100;
	if (temp > 100) p = 1000;

	for (int i = 1; i < 10; i++) {
		if (temp * temp * i % p == temp) return i;
	}
	return 0;
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;

		int result = fun(temp);
		if (result != 0) printf("%d %d\n", result, temp * temp * result);
		else cout << "No" << endl;
	}
	return 0;
}