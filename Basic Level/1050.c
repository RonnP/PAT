/**
 * Created by Ronn on 2/1/18
 * 1050. 螺旋矩阵
 */
#include <stdio.h>
#include <stdlib.h>

//降序
int cmp(const void *a, const void *b) {
	return (*(int *) b - *(int *) a);
}

//求m-n最小值 m>=n m-n>=0
int getM(int t) {
	if (t == 0) return 0;
	int m = 1;
	while (1) {
		int n = t / m;
		if (m - n >= 0 && t % m == 0) {
			return m;
		}
		m++;
	}
}

int main() {
	int t;
	scanf("%d", &t);
	int m = getM(t), n = t / m, a[t];
	for (int i = 0; i < t; i++)
		scanf("%d", &a[i]);
	qsort(a, t, sizeof(int), cmp);

	int b[m][n];
	int l = n, d = m, r = 0, u = 1;
	int x = 0, y = 0, p = 0;
	while (p < t) {
		for (; p < t && x < l; x++) //左
			b[y][x] = a[p++];
		x--;
		l--;
		y++;
		for (; p < t && y < d; y++) //下
			b[y][x] = a[p++];
		y--;
		d--;
		x--;
		for (; p < t && x >= r; x--) //右
			b[y][x] = a[p++];
		x++;
		r++;
		y--;
		for (; p < t && y >= u; y--) //上
			b[y][x] = a[p++];
		y++;
		u++;
		x++;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j) printf(" ");
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}