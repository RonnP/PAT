/**
 * L1-022. 奇偶分家
 * Created by Ronn on 3/5/18
 */
#include <iostream>

using namespace std;

int main() {
	int n, jiCnt = 0, ouCnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		temp % 2 ? jiCnt++ : ouCnt++;
	}

	printf("%d %d", jiCnt, ouCnt);
	return 0;
}