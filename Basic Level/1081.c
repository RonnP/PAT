/**
 * Created by Ronn on 3/19/18
 * 1081. 检查密码
 */
#include <stdio.h>
#include <ctype.h>

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		char c;
		int len = 0, flag = 1;
		int aCnt = 0, bCnt = 0;//字母个数和数字个数

		while ((c = getchar()) != '\n') {
			len++;
			if (isalpha(c)) aCnt++;
			else if (isdigit(c)) bCnt++;
			else if (c != '.') flag = 0;
		}

		if (len < 6) //密码太短
			printf("Your password is tai duan le.\n");
		else if (!flag) //存在不合法字符
			printf("Your password is tai luan le.\n");
		else if (bCnt == 0) //只有字母没有数字
			printf("Your password needs shu zi.\n");
		else if (aCnt == 0) //只有数字没有字母
			printf("Your password needs zi mu.\n");
		else
			printf("Your password is wan mei.\n");
	}
	return 0;
}