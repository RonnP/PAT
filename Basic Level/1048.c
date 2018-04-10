/**
 * Created by Ronn on 1/30/18
 * 1048. 数字加密
 */
#include <stdio.h>
#include <string.h>

int main() {
	char strA[100], strB[100];
	scanf("%s %s", strA, strB);

	int lenA = strlen(strA) - 1, lenB = strlen(strB) - 1;
	int len = lenA > lenB ? lenA : lenB;
	char strC[len + 2];
	int t = 1;0
	for (int i = len; i >= 0; i--) {
		int a = lenA < 0 ? 0 : strA[lenA--] - 48;
		int b = lenB < 0 ? 0 : strB[lenB--] - 48;

		int temp = 0;
		if (t % 2) {//奇数位
			temp = (a + b) % 13;
			if (temp < 10) strC[i] = temp + 48;
			else if (temp == 10) strC[i] = 'J';
			else if (temp == 11) strC[i] = 'Q';
			else strC[i] = 'K';
		} else {
			temp = b - a;
			if (temp < 0) temp += 10;
			strC[i] = temp + 48;
		}

		t++;
	}

	strC[len + 1] = '\0';
	printf("%s", strC);
	return 0;
}