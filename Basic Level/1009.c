/**
 * Created by Ronn on 12/22/17
 * 1009. 说反话
 */
#include <stdio.h>

int main() {
	char c;
	char strs[80][80];
	int x = 0, y = 0;
	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			y = 0;
			x++;
		} else {
			strs[x][y] = c;
			y++;
		}
	}

	for (int i = x; i >= 0; i--) {
		printf("%s", strs[i]);
		if (i != 0) printf(" ");
	}
	return 0;
}