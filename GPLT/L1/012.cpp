/**
 * L1-012. 计算指数
 * Created by Ronn on 3/3/18
 */
#include <iostream>

using namespace std;

int main() {
	int n, sum = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
		sum *= 2;
	printf("2^%d = %d", n, sum);
	return 0;
}