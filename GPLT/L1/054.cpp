/**
 * L1-054. 福到了
 * Created by Ronn on 3/11/18
 */
#include <iostream>

using namespace std;

int main() {
	char c;
	int n;
	cin >> c >> n;
	getchar();
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		char ch;
		int j = 0;
		while ((ch = getchar()) != '\n')
			arr[i][j++] = (ch != ' ');
	}

	int flag = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] != arr[n - i - 1][n - j - 1]) {
				flag = 0;
				break;
			}
		}

		if (!flag) break;
	}

	if (flag) cout << "bu yong dao le" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << (arr[n - i - 1][n - j - 1] ? c : ' ');
		cout << endl;
	}
	return 0;
}