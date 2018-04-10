/**
 * L1-029. 是不是太胖了
 * Created by Ronn on 3/6/18
 */
#include <iostream>

using namespace std;

int main() {
	double h;
	cin >> h;
	double w = (h - 100) * 0.9 * 2;
	printf("%.1lf", w);
	return 0;
}