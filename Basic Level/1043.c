/**
 * Created by Ronn on 1/25/18
 * 1043. 输出PATest
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[10000];
	scanf("%s", str);
	char s[] = "PATest";
	int arr[6] = {0}, len = 0;
	for (int i = 0; i < strlen(str); i++) {
		len++;
		switch (str[i]) {
			case 'P':
				arr[0]++;
				break;
			case 'A':
				arr[1]++;
				break;
			case 'T':
				arr[2]++;
				break;
			case 'e':
				arr[3]++;
				break;
			case 's':
				arr[4]++;
				break;
			case 't':
				arr[5]++;
				break;
			default:
				len--;
				break;
		}
	}

	for (int i = 0; i < len; i++) {
		int temp = i % 6;
		if (arr[temp] > 0) {
			printf("%c", s[temp]);
			arr[temp]--;
		} else len++;
	}
	return 0;
}