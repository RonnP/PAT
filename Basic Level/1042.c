/**
 * Created by Ronn on 1/24/18
 * 1042. 字符统计
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000];
	scanf("%[^\n]", str);
	int arr[26] = {0};
	for (int i = 0; i < strlen(str); i++) {
		char c = str[i];
		if (c >= 'a' && c <= 'z')
			arr[c - 97]++;
		else if (c >= 'A' && c <= 'Z')
			arr[c - 65]++;
	}

	char maxChar = 'a';
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			maxChar = i + 97;
			max = arr[i];
		}
	}

	printf("%c %d", maxChar, max);
	return 0;
}