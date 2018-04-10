/**
 * L1-002. 打印沙漏
 * Created by Ronn on 3/1/18
 */
#include <iostream>
#include <cmath>

using namespace std;

void print(int cnt, char c) {
	for (int i = 0; i < cnt; i++)
		cout << c;
}

int main() {
	int n;
	char c;
	cin >> n >> c;
	int k = static_cast<int>(sqrt((n + 1) / 2));
	int temp = k * 2 - 1;
	for (int i = 0; i < k; i++) {
		print(i, ' ');
		print(temp, c);
		n -= temp;
		temp -= 2;
		cout << endl;
	}

	temp = 3;
	for (int i = k - 2; i >= 0; i--) {
		print(i, ' ');
		print(temp, c);
		n -= temp;
		temp += 2;
		cout << endl;
	}

	cout << n;
	return 0;
}