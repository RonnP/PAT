/**
 * L1-039. 古风排版
 * Created by Ronn on 3/8/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	string str;
	cin >> n;
	getchar();
	getline(cin, str);
	int len = str.length();
	if (len % n) {
		for (; len % n; len++)
			str += " ";
	}

	for (int i = 0; i < n; i++) {
		int t = len - n + i;
		while (t >= 0) {
			cout << str[t];
			t -= n;
		}
		cout << endl;
	}
	return 0;
}