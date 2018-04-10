/**
 * Created by Ronn on 1/31/18
 * 1049. 数列的片段和
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		double t;
		scanf("%lf", &t);
		sum += t * (n - i) * (i + 1);
	}

	printf("%.2f", sum);
	return 0;
}