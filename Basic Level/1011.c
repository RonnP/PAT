/**
 * Created by Ronn on 12/24/17
 * 1011. A+B和C
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		long a, b, c;
		scanf("%ld %ld %ld", &a, &b, &c);
		char *str = a + b > c ? "true" : "false";
		printf("Case #%d: %s\n", i, str);
	}
	return 0;
}