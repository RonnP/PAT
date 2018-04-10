/**
 * Created by Ronn on 1/11/18
 * 1029. 旧键盘
 */
#include <stdio.h>
#include <string.h>

//将字符串全部转换成大写
char *strUper(char *str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return str;
}

int main() {
	char str1[80], str2[80];
	scanf("%s %s", str1, str2);

	strUper(str1);
	strUper(str2);

	int t = 0, len = (int) (strlen(str1) - strlen(str2));
	char str3[len];
	for (int i = 0; i < strlen(str1); i++) {
		char c = str1[i];
		//判断c是否在str1和str2中出现过
		if (strchr(str3, c) == NULL && strchr(str2, c) == NULL) {
			str3[t++] = c;
		}
	}

	if (t < len) str3[t] = '\0';
	printf("%s", str3);
	return 0;
}
