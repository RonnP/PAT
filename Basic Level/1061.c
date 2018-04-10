/**
 * Created by Ronn on 2/7/18
 * 1061. 判断题
 */
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int anser[2][m];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < m; j++)
			scanf("%d", &anser[i][j]);

	}

	for (int i = 0; i < n; i++) {
		int score = 0;
		for (int j = 0; j < m; j++) {
			int temp;
			scanf("%d", &temp);
			if (temp == anser[1][j]) score += anser[0][j];
		}
		printf("%d\n", score);
	}
	return 0;
}