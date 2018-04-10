/**
 * L1-055. 谁是赢家
 * Created by Ronn on 3/11/18
 */
#include <iostream>

using namespace std;

int main() {
	int pa, pb;
	cin >> pa >> pb;
	// 表示艺人a得到的评委票
	int p2 = 0;
	for (int i = 0; i < 3; i++) {
		int temp;
		cin >> temp;
		if (!temp) p2++;
	}

	if ((pa > pb && p2 >= 1) || p2 == 3)
		printf("The winner is %c: %d + %d", 'a', pa, p2);
	else
		printf("The winner is %c: %d + %d", 'b', pb, 3 - p2);
	return 0;
}