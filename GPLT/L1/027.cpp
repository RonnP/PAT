/**
 * L1-027. 出租
 * Created by Ronn on 3/6/18
 */
#include <iostream>
#include <set>

using namespace std;

int main() {
	string tel;
	getline(cin, tel);
	int arr[10] = {0};
	for (char c : tel) {
		arr[c - '0'] = 1;
	}

	int flag = 0, t = 0;
	cout << "int[] arr = new int[]{";
	for (int i = 9; i >= 0; i--) {
		if (arr[i]) {
			if (flag) cout << ",";
			cout << i;
			arr[i] = t++;
			flag = 1;
		} else arr[i] = -1;
	}
	cout << "};" << endl;

	flag = 0;
	cout << "int[] index = new int[]{";
	for (char c : tel) {
		if (flag) cout << ",";
		cout << arr[c - '0'];
		flag = 1;
	}
	cout << "};" << endl;
	return 0;
}