/**
 * Created by Ronn on 12/29/17
 * 1076. Wifi密码
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char str[101];
	for (int i = 0; i < n; i++) {
		char ans;//正确答案
		for (int j = 0; j < 4; j++) {
			char a, b;
			scanf(" %c-%c", &a, &b);
			if (b == 'T')
				ans = "1234"[a - 'A'];
		}
		str[i] = ans;
	}
	str[n] = '\0';
	printf("%s", str);
	return 0;
}