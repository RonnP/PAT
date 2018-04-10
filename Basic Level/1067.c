/**
 * Created by Ronn on 12/27/17
 * 1067. 试密码
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[20];
	int n, cnt = 0;
	scanf("%s %d", str, &n);

	while (1) {
		char temp[200];
		getchar();
		scanf("%[^\n]", temp);

		if (strcmp("#", temp) == 0) break;
		cnt++;
		if (cnt <= n) {
			if (strcmp(str, temp) == 0) {
				printf("Welcome in\n");
				break;
			} else {
				printf("Wrong password: %s\n", temp);

				if (cnt == n) {
					printf("Account locked\n");
					break;
				}
			}
		}

	}
	return 0;
}