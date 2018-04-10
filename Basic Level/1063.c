/**
 * Created by Ronn on 2/9/18
 * 1063. 计算谱半径
 */
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	double max = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		double temp = sqrt(a * a + b * b);
		if (temp > max) max = temp;
	}

	printf("%.2f", max);
	return 0;
}