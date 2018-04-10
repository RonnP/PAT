/**
 * L1-020. 帅到没朋友
 * Created by Ronn on 3/4/18
 */
#include <iostream>
#include <set>

using namespace std;

int main() {
	int n, k, flag = 0;
	string temp;
	set<string> s1, s2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;

		if (k < 2) {
			cin >> temp;
			continue;
		}

		for (int j = 0; j < k; j++) {
			cin >> temp;
			s1.insert(temp);
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (s1.find(temp) == s1.end() && s2.find(temp) == s2.end()) {
			if (flag) cout << " ";
			cout << temp;

			flag = 1;
			s2.insert(temp);
		}
	}

	if (flag == 0) cout << "No one is handsome" << endl;
	return 0;
}