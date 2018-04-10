/**
 * Created by Ronn on 12/29/17
 * 1079. 延迟的回文数
 */
#include <stdio.h>
#include <string.h>

void reverse(char a[], char b[]) {
	int len = strlen(a);
	for (int i = 0; i < len; i++)
		b[i] = a[len - i - 1];
	b[len] = '\0';
}

void sum(char a[], char b[]) {
	int len = strlen(a), t = 0;
	for (int i = 0; i < len; i++) {
		int sum = a[i] + a[len - i - 1] - 96 + t;
		b[i] = (char) (sum % 10 + 48);
		t = sum / 10;
	}

	if (t) {
		b[len] = (char) (t + 48);
		b[len + 1] = '\0';
	} else b[len] = '\0';

}

int main() {
	char a[2000], b[2000];
	scanf("%s", a);
	reverse(a, b);

	int t = 0;
	while (strcmp(a, b) && t < 10) {
		printf("%s + %s = ", a, b);
		sum(a, b);
		reverse(b, a);
		printf("%s\n", a);
		t++;
	}

	if (t == 10) printf("Not found in 10 iterations.");
	else printf("%s is a palindromic number.", a);
	return 0;
}