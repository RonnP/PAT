/**
 * L1-031. 到底是不是太胖了
 * Created by Ronn on 3/7/18
 */
#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h, w;
		cin >> h >> w;
		// 标准体重
		double sw = (h - 100) * 0.9 * 2;

		if (abs(w - sw) < sw * 0.1)
			cout << "You are wan mei!" << endl;
		else {
			if (w > sw)
				cout << "You are tai pang le!" << endl;
			else
				cout << "You are tai shou le!" << endl;
		}
	}
	return 0;
}