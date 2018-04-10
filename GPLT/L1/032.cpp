/**
 * L1-032. Left-pad
 * Created by Ronn on 3/7/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	char c;
	string str;
	cin >> n >> c;
	cin.get();
	getline(cin, str);

	int len = str.length();
	if (len < n) {
		for (int i = 0; i < n - len; i++)
			cout << c;
		cout << str << endl;
	} else
		cout << str.substr(len - n, n) << endl;
	return 0;
}