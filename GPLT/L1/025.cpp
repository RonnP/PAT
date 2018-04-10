/**
 * L1-025. 正整数A+B
 * Created by Ronn on 3/5/18
 */
#include <iostream>

using namespace std;

string isNum(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (!isdigit(s[i])) return "?";
	}

	int num = stoi(s);
	if(num==0||num>1000) return "?";
	return s;
}

int main() {
	string str, a, b;
	getline(cin,str);

	int point = str.find(' ');
	a = str.substr(0, point);
	b = str.substr(point + 1, str.length() - point - 1);

	a=isNum(a);
	b=isNum(b);

	cout << a << " + " << b << " = ";
	if (a != "?" && b != "?")
		cout << stoi(a) + stoi(b);
	else cout << "?";
	return 0;
}