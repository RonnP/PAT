/**
 * L1-044. 稳赢
 * Created by Ronn on 3/9/18
 */
#include <iostream>

using namespace std;

int main() {
	int k, t = 0;
	cin >> k;
	string str;
	while (true) {
		cin >> str;
		if (str == "End") break;

		if (t < k) {
			if (str == "ChuiZi")
				cout << "Bu" << endl;
			else if (str == "JianDao")
				cout << "ChuiZi" << endl;
			else
				cout << "JianDao" << endl;
			t++;
		} else {
			cout << str << endl;
			t = 0;
		}
	}
	return 0;
}