/**
 * L1-056. 猜数字
 * Created by Ronn on 3/11/18
 */
#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	string strs[200] = {""};
	for (int i = 0; i < n; i++) {
		string s;
		int temp;
		cin >> s >> temp;
		strs[temp] = s;
		sum += temp;
	}

	int avg = sum / n / 2, p = 0;
	while (true) {
		if (avg - p >= 0 && strs[avg - p] != "") {
			cout << avg << " " << strs[avg - p];
			break;
		} else if (avg + p <= 100 && strs[avg + p] != "") {
			cout << avg << " " << strs[avg + p];
			break;
		} else p++;
	}
	return 0;
}