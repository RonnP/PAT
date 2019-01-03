/**
 * 1092 最好吃的月饼
 * Created by Ronn on 12/10/18
 */

#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int arrs[1001] = {0}, max = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int t;
			cin >> t;
			arrs[j] += t;
			if (arrs[j] > max) max = arrs[j];
		}
	}

	cout << max << endl;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (arrs[i] == max) {
			if (flag) cout << " ";
			else flag = true;

			cout << i + 1;
		}
	}
	return 0;
}