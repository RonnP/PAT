/**
 * Created by Ronn on 1/18/18
 * 1036. 跟奥巴马一起编程
 */
#include <stdio.h>

int main() {
	int n;
	char c;
	scanf("%d %c", &n, &c);
	for (int i = 0; i < (n + 1) / 2; i++) {
		int flag = i == 0 || i == (n + 1) / 2 - 1 ? 1 : 0;
		for (int j = 0; j < n; j++) {
			if (flag) printf("%c", c);
			else {
				if (j == 0 || j == n - 1) printf("%c", c);
				else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}