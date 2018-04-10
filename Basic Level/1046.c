/**
 * Created by Ronn on 1/28/18
 * 1046. 划拳
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int p1 = 0, p2 = 0;
	for (int i = 0; i < n; i++) {
		int a1, a2, b1, b2;
		scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
		if (a2 == b2) continue;

		int ab = a1 + b1;
		if (ab == a2) p2++;
		if (ab == b2) p1++;
	}

	printf("%d %d", p1, p2);
	return 0;
}