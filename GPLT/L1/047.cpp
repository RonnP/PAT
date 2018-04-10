/**
 * L1-047. 装睡
 * Created by Ronn on 3/10/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		int a, b;
		cin >> name >> a >> b;
		if (a < 15 || a > 20 || b < 50 || b > 70)
			cout << name << endl;
	}
	return 0;
}