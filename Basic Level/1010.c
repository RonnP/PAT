/**
 * Created by Ronn on 12/23/17
 * 1010. 一元多项式求导
 */
#include <stdio.h>

int main() {
	int x, y, flag = 1;
	char c;
	while (1) {
		scanf("%d %d%c", &x, &y, &c);
		if (y == 0) break;
		if (!flag) printf(" ");
		else flag = 0;
		printf("%d %d", x * y, y - 1);
		if (c == '\n') break;
	}

	if (flag) printf("0 0");
	return 0;
}