/**
 * 1093 字符串A+B
 * Created by Ronn on 12/10/18
 */

#include <iostream>
#include <set>

using namespace std;

int main() {
	string s, s1, s2;
	bool strs[200] = {false};
	getline(cin, s1);
	getline(cin, s2);

	s = s1 + s2;
	for (int i = 0; i < s.size(); i++) {
		if (!strs[s[i]]) cout << s[i];
		strs[s[i]] = true;
	}
	return 0;
}