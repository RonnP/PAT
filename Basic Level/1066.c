/**
 * Created by Ronn on 12/27/17
 * 1066. 图像过滤
 */
#include <stdio.h>

int main() {
	int m, n, a, b, k;
	scanf("%d %d %d %d %d", &m, &n, &a, &b, &k);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int t;
			scanf("%d", &t);
			if (j) printf(" ");
			if (t >= a && t <= b) t = k;
			printf("%03d", t);
		}
		printf("\n");
	}
	return 0;
}