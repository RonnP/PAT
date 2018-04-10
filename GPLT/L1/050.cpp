/**
 * L1-050. 倒数第N个字符串
 * Created by Ronn on 3/10/18
 */
#include <iostream>

using namespace std;

int main() {
	int l, n;
	cin >> l >> n;
	char str[l + 1];
	n -= 1;
	for (int i = l - 1; i >= 0; i--) {
		str[i] = 'z' - n % 26;
		n /= 26;
	}
	str[l] = '\0';
	cout << str << endl;
	return 0;
}