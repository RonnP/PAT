/**
 * L1-033. 出生年
 * Created by Ronn on 3/7/18
 */
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int fun(int n) {
	int p = 1000;
	set<int> arr;
	for (int i = 0; i < 4; i++) {
		arr.insert(n / p);
		n %= p;
		p /= 10;
	}
	return arr.size();
}

int main() {
	int y, n, result = 0;
	cin >> y >> n;
	while (fun(y) != n) {
		result++;
		y++;
	}
	printf("%d %04d", result, y);
	return 0;
}