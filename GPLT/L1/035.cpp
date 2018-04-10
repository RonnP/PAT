/**
 * L1-035. 情人节
 * Created by Ronn on 3/7/18
 */
#include <iostream>

using namespace std;

int main() {
	string A, B, str;
	int t = 0;
	while (cin >> str) {
		if (str == ".") break;
		t++;
		if (t == 2) A = str;
		else if (t == 14) B = str;
	}

	if (t >= 14)
		cout << A << " and " << B << " are inviting you to dinner..." << endl;
	else if (t >= 2)
		cout << A << " is the only one for you..." << endl;
	else
		cout << "Momo... No one is for you ..." << endl;
	return 0;
}