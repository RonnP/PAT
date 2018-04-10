/**
 * L1-010. 比较大小
 * Created by Ronn on 3/2/18
 */
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
	printf("%d->%d->%d", a, b, c);
	return 0;
}