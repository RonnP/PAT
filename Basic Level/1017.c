/**
 * Created by Ronn on 12/30/17
 * 1017. A除以B
 */
#include <stdio.h>
#include <string.h>

int main() {
	char a[1000];
	int b, flag = 1;
	scanf("%s %d", a, &b);

	a[0] -= 48;
	int q = a[0] / b, r = a[0] % b;
	if (q > 0) {
		printf("%d", q);
		flag = 0;
	}

	for (int i = 1; i < strlen(a); i++) {
		flag = 0;
		q = r * 10 + a[i] - 48;
		printf("%d", q / b);
		r = q % b;
	}

	if (flag) printf("0");
	printf(" %d", r);
	return 0;
}