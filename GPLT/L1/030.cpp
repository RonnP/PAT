/**
 * L1-030. 一帮一
 * Created by Ronn on 3/6/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int boys[n / 2], girls[n / 2];
	string stus[n];
	int gl = 0, bl = 0;
	for (int i = 0; i < n; i++) {
		int sex;
		cin >> sex >> stus[i];
		if (sex) boys[bl++] = i;
		else girls[gl++] = i;
	}

	int gr = gl - 1, br = bl - 1;
	bl = 0;
	for (int i = 0; i < n / 2; i++) {
		if (boys[bl] == i) {
			cout << stus[i] << " " << stus[girls[gr--]] << endl;
			bl++;
		} else
			cout << stus[i] << " " << stus[boys[br--]] << endl;
	}
	return 0;
}