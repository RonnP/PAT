/**
 * Created by Ronn on 12/14/17
 * 1001. 害死人不偿命的(3n+1)猜想
 */
#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) n /= 2;
		else n = (3 * n + 1) / 2;
		cnt++;
	}

	printf("%d", cnt);
	return 0;
}