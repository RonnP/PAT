/**
 * Created by Ronn on 2/3/18
 * 1057. 数零壹
 */
#include <stdio.h>

int main() {
	char c;
	int sum = 0;
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z')
			sum += c - 96;
		else if (c >= 'A' && c <= 'Z')
			sum += c - 64;
	}

	int a = 0, b = 0;
	while (sum) {
		sum % 2 ? a++ : b++;
		sum /= 2;
	}

	printf("%d %d", b, a);
	return 0;
}