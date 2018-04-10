/**
 * L1-019. 谁先倒
 * Created by Ronn on 3/4/18
 */
#include <iostream>

using namespace std;

int main() {
	int aCnt, bCnt, n;
	cin >> aCnt >> bCnt >> n;
	int at = aCnt, bt = bCnt;
	for (int i = 0; i < n; i++) {
		int a1, a2, b1, b2;
		cin >> a1 >> a2 >> b1 >> b2;

		int ab = a1 + b1;
		int af = ab == a2, bf = ab == b2;

		if (af == bf) continue;
		af ? aCnt-- : bCnt--;

		if (aCnt < 0) {
			cout << "A\n" << bt - bCnt;
			break;
		}

		if (bCnt < 0) {
			cout << "B\n" << at - aCnt;
			break;
		}
	}
	return 0;
}