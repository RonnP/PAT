/**
 * L1-008. 求整数段和
 * Created by Ronn on 3/2/18
 */
#include <iostream>

using namespace std;

int main() {
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a, t = 0; i <= b; i++, t++) {
		if (t && t % 5 == 0) cout << endl;
		printf("%5d", i);
		sum += i;
	}
	cout << endl << "Sum = " << sum;
	return 0;
}