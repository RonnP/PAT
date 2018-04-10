/**
 * L1-049. 天梯赛座位分配
 * Created by Ronn on 3/10/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] *= 10;
	}

	int t = 1, b[n][100];
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] <= i) continue;
			if (i && b[j][i - 1] == t - 1) t++;
			b[j][i] = t++;
		}
	}


	for (int i = 0; i < n; i++) {
		cout << "#" << i + 1 << endl;
		for (int j = 0; j < a[i]/10; j++) {
			for (int k = 0; k < 10; k++) {
				if (k) cout << " ";
				cout << b[i][j * 10 + k];
			}
			cout << endl;
		}
	}
	return 0;
}