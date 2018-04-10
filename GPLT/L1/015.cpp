/**
 * L1-015. 跟奥巴马一起画方块
 * Created by Ronn on 3/3/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	char c;
	cin >> n >> c;
	for (int i = 0; i < (n + 1) / 2; i++) {
		for (int j = 0; j < n; j++)
			cout << c;
		cout << endl;
	}
	return 0;
}