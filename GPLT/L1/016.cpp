/**
 * L1-016. 查验身份证
 * Created by Ronn on 3/4/18
 */
#include <iostream>

using namespace std;

int check(string id) {
	int Q[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	int M[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};

	int sum = 0;
	// 验证前17位是否有X
	for (int i = 0; i < 17; i++) {
		if (id[i] < '0' || id[i] > '9') return 0;
		sum += Q[i] * (id[i] - '0');
	}

	//校验验证值
	sum %= 11;
	if (id[17] - '0' == M[sum]) return 1;
	if (id[17] == 'X' && sum == 2) return 1;
	return 0;
}

int main() {
	int n, flag = 1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string id;
		cin >> id;

		if (!check(id)) {
			flag = 0;
			cout << id << endl;
		}
	}

	if (flag) cout << "All passed" << endl;
	return 0;
}