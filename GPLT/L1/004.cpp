/**
 * L1-004. 计算摄氏温度
 * Created by Ronn on 3/1/18
 */
#include <iostream>

using namespace std;

int main() {
	int f;
	cin >> f;
	int c = 5 * (f - 32) / 9;
	cout << "Celsius = " << c;
	return 0;
}