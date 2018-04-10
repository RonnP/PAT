/**
 * L1-040. 最佳情侣身高差
 * Created by Ronn on 3/8/18
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char sex;
		double height;
		cin >> sex >> height;
		if (sex == 'F')
			printf("%.2f\n", height * 1.09);
		else
			printf("%.2f\n", height / 1.09);
	}
	return 0;
}