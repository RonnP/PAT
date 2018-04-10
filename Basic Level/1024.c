/**
 * Created by Ronn on 1/6/18
 * 1024. 科学计数法
 */
#include <stdio.h>
#include <string.h>

void printZero(int len) {
	for (int i = len; i < 0; i++)
		printf("0");
}

int main() {
	char str[10000];
	int n;
	scanf("%[^E]E%d", str, &n);
	if (str[0] == '-') printf("-");
	if (n < 0) {
		printf("0.");
		printZero(n + 1);
		printf("%c%s", str[1], str + 3);
	} else {
		printf("%c", str[1]);
		int len = strlen(str) - 3 - n;
		if (len > 0) {
			for (int i = 0; i < n; i++)
				printf("%c", str[i + 3]);
			printf(".%s", str + 3 + n);
		} else {
			printf("%s", str + 3);
			printZero(len);
		}
	}
	return 0;
}