/**
 * Created by Ronn on 1/15/18
 * 1033. 旧键盘打字
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100000], str2[100000];

	char c;
	int t = 0;
	// 接收str1;
	while ((c = getchar()) != '\n')
		str1[t++] = c;

	int flag = strchr(str1, '+') != NULL;
	t = 0;
	// 接收str2
	while ((c = getchar()) != '\n') {
		if (c >= 'A' && c <= 'Z') {
			if (flag) continue;
			if (strchr(str1, c) != NULL) continue;
		} else if (c >= 'a' && c <= 'z') {
			if (strchr(str1, c - 32) != NULL) continue;
		} else {
			if (strchr(str1, c) != NULL) continue;
		}

		str2[t++] = c;
	}

	printf("%s", str2);
	return 0;
}