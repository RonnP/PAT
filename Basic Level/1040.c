/**
 * Created by Ronn on 1/22/18
 * 1040. 有几个PAT
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[100000];
	scanf("%s", str);
	int len = (int) strlen(str);

	int p = 0, a = 0, t = 0;
	for (int i = 0; i < len; i++)
		if (str[i] == 'T') t++;

	for (int i = 0; i < len && t > 0; i++) {
		switch (str[i]) {
			case 'P':
				p++;
				break;
			case 'T':
				t--;
				break;
			default:
				a = (a + p * t % 1000000007) % 1000000007;
		}
	}

	printf("%d", a % 1000000007);
	return 0;
}