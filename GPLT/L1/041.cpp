/**
 * L1-041. 寻找250
 * Created by Ronn on 3/9/18
 */
#include <iostream>

using namespace std;

int main() {
	int t = 1;
	while (true) {
		int temp;
		cin >> temp;
		if (temp == 250) break;
		t++;
	}
	cout << t;
	return 0;
}