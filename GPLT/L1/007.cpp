/**
 * L1-007. 念数字
 * Created by Ronn on 3/2/18
 */
#include <iostream>

using namespace std;

int main() {
	string strs[10] = {"ling", "yi", "er",
	                   "san", "si", "wu", "liu",
	                   "qi", "ba", "jiu"};
	string num;
	cin >> num;
	for (int i = 0; i < num.length(); i++) {
		if (i) cout << " ";
		char c = num[i];
		if (c == '-') cout << "fu";
		else cout << strs[c - '0'];
	}
	return 0;
}