/**
 * 1090 危险品装箱
 * Created by Ronn on 9/9/18
 */

#include <iostream>
#include <set>

using namespace std;

set<int> s1[100000];

bool fun(int x, set<int> &s) {
	for (int y : s1[x]) {
		if (s.find(y) != s.end())
			return false;
	}

	return true;
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		s1[x].insert(y);
		s1[y].insert(x);
	}

	for (int i = 0; i < m; i++) {
		int k, temp;
		bool flag= true;
		cin >> k;

		set<int> s2;
		for (int j = 0; j < k; j++) {
			cin >> temp;
			s2.insert(temp);
		}

		for (int t : s2) {
			if (!fun(t, s2)) {
				flag = false;
				break;
			}
		}

		if (flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}