/**
 * L1-037. A除以B
 * Created by Ronn on 3/8/18
 */
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	printf("%d/", a);
	if (b < 0) printf("(%d)", b);
	else cout << b;

	if (b) printf("=%.2f", 1.0 * a / b);
	else cout << "=Error";
	return 0;
}