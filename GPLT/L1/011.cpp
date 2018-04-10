/**
 * L1-011. A-B
 * Created by Ronn on 3/3/18
 */
#include <iostream>

using namespace std;

int main() {
	int asc[256] = {0};
	string s, a;
	getline(cin, s);
	getline(cin, a);

	for (int i = 0; i < a.length(); i++) {
		int t = a[i];
		asc[t] = 1;
	}

	for (int i = 0; i < s.length(); i++) {
		int t = s[i];
		if (!asc[t]) cout << s[i];
	}
	return 0;
}