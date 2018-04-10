/**
 * L1-003. 个位数统计
 * Created by Ronn on 3/1/18
 */
#include <iostream>

using namespace std;

int main() {
	int arr[10] = {0};
	char c;
	while ((c = getchar()) != '\n')
		arr[c - '0']++;

	for (int i = 0; i < 10; i++) {
		if (arr[i] != 0) {
			cout << i << ":" << arr[i] << endl;
		}
	}
	return 0;
}