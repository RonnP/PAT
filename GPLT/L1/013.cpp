/**
 * L1-013. 计算阶乘和
 * Created by Ronn on 3/3/18
 */
#include <iostream>

using namespace std;

int main() {
	int n, sum = 1;
	cin >> n;
	if (n > 1) sum += n;
	for (int i = n - 1; i > 1; i--) {
		sum = 1 + i * sum;
	}
	cout << sum;
	return 0;
}