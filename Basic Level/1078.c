/**
 * Created by Ronn on 12/29/17
 * 1078. 字符串压缩与解压
 */
#include <stdio.h>
#include <string.h>

void printC(char *str) {
	int len = strlen(str), cnt = 1;
	for (int i = 1; i < len; i++) {
		if (str[i - 1] == str[i]) cnt++;
		else {
			if (cnt != 1) printf("%d", cnt);
			printf("%c", str[i - 1]);
			cnt = 1;
		}
	}

	if (cnt != 1) printf("%d", cnt);
	printf("%c", str[len - 1]);
}

void printD(char *str) {
	int len = strlen(str), cnt = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] >= '0' && str[i] <= '9')
			cnt = cnt * 10 + str[i] - '0';
		else {
			if (cnt == 0) cnt = 1;
			for (int j = 0; j < cnt; j++)
				printf("%c", str[i]);
			cnt = 0;
		}
	}
}

int main() {
	char str[1000], c = getchar();
	while (getchar() != '\n');
	scanf("%[^\n]", str);
	if (c == 'C') printC(str);
	else if (c == 'D') printD(str);
	return 0;
}