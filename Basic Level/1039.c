/**
 * Created by Ronn on 1/21/18
 * 1039. 到底买不买
 */
#include <stdio.h>
#include <string.h>

int main() {
	char s1[1000], s2[1000];
	scanf("%s %s", s1, s2);

	int len1 = strlen(s1), len2 = strlen(s2);
	int cnt = 0;

	for (int i = 0; i < len2; i++) {
		int flag = 0;
		for (int j = 0; j < len1; j++) {
			if (s2[i] == s1[j]) {
				flag = 1;
				s1[j] = '*';
				break;
			}
		}

		if (!flag) cnt++;
	}

	if (cnt)
		printf("No %d", cnt);
	else
		printf("Yes %d", len1 - len2);
	return 0;
}