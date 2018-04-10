/**
 * L1-024. 后天
 * Created by Ronn on 3/5/18
 */
#include <iostream>

using namespace std;

int main() {
	int d;
	cin >> d;
	d = (d + 2) % 7;
	if (d == 0) d = 7;
	cout << d;
	return 0;
}