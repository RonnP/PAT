/**
 * Created by Ronn on 12/27/17
 * 1068. 万绿丛中一点红
 */
#include <stdio.h>

int m, n, tol;
int a[1000][1000];
int dir[8][2] = {{-1, -1},
                 {-1, 0},
                 {-1, 1},
                 {0,  -1},
                 {0,  1},
                 {1,  -1},
                 {1,  0},
                 {1,  1}};

int isRepeat(int num) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == num) cnt++;
			if (cnt > 1) return 0;
		}
	}
	return 1;
}

int isJudge(int i, int j) {
	for (int k = 0; k < 8; k++) {
		int tx = i + dir[k][0];
		int ty = j + dir[k][1];
		if (tx >= 0 && tx < n &&
		    ty >= 0 && ty < m &&
		    a[i][j] - a[tx][ty] >= 0 - tol &&
		    a[i][j] - a[tx][ty] <= tol)
			return 0;
	}
	return 1;
}

int main() {
	scanf("%d %d %d", &m, &n, &tol);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	}

	int x = 0, y = 0, color = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (isRepeat(a[i][j]) && isJudge(i, j)) {
				cnt++;
				x = j + 1;
				y = i + 1;
				color = a[i][j];
			}
		}
	}

	if (cnt == 0) printf("Not Exist");
	else if (cnt == 1) printf("(%d, %d): %d", x, y, color);
	else printf("Not Unique");
	return 0;
}