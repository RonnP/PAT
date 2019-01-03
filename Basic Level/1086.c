/**
 * 1086 就不告诉你
 * Created by Ronn on 9/9/18
 */

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a * b, p = 10;

	if (sum == 0) printf("0");
	else while (sum % 10 == 0) sum /= 10;

	while (sum > 0) {
		printf("%d", sum % p);
		sum /= p;
	}
	return 0;
}