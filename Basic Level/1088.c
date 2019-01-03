/**
 * 1088 三人行
 * Created by Ronn on 9/9/18
 */

#include <stdio.h>
#include <stdlib.h>

int m, x, y;

void fun(double temp) {
	if (temp == m) printf(" Ping");
	else if (temp > m) printf(" Cong");
	else printf(" Gai");
}

int main() {
	scanf("%d %d %d", &m, &x, &y);
	int flag = 0;
	for (int jia = 99; jia > 9; jia--) { //表示甲
		int yi = jia % 10 * 10 + jia / 10;
		if (abs(jia - yi) * 1.0 / x == yi * 1.0 / y) {
			printf("%d", jia);
			fun(jia);
			fun(yi);
			fun(yi*1.0 / y);
			flag = 1;
			break;
		}
	}

	if (!flag) printf("No Solution");
	return 0;
}