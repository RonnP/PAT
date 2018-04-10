/**
 * Created by Ronn on 12/29/17
 * 1016. 部分A+B
 */
#include <stdio.h>

//截取n中dn部分
int bufen(int n, int dn) {
	int pn = 0;
	while (n != 0) {
		int t = n % 10;
		if (t == dn) pn = pn * 10 + t;
		n /= 10;
	}
	return pn;
}

int main() {
	int a, da, b, db;
	scanf("%d %d %d %d", &a, &da, &b, &db);
	printf("%d", bufen(a, da) + bufen(b, db));
	return 0;
}