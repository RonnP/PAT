/**
 * L1-017. 到底有多二
 * Created by Ronn on 3/4/18
 */
#include <iostream>

using namespace std;

int main() {
	float towCnt = 0, cnt = 0, fu = 1, ou = 1;
	char c;
	while ((c = getchar()) != '\n') {
		if (c == '-') {
			fu = 1.5;
			continue;
		}

		if (c == '2') towCnt++;
		ou = (c - '0') % 2 ? 1 : 2;
		cnt++;
	}

	printf("%.2f%%", towCnt / cnt * fu * ou * 100);
	return 0;
}