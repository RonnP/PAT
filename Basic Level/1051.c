/**
 * Created by Ronn on 2/1/18
 * 1051. 复数乘法
 */
#include <stdio.h>
#include <math.h>

int main() {
	double r1, p1, r2, p2;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);

	double a = r1 * r2 * cos(p1 + p2);
	double b = r1 * r2 * sin(p1 + p2);

	char c = '+';
	a = a < 0.01 && a > -0.01 ? 0 : a;
	if (b < 0.01 && b > -0.01) b = 0;
	else if (b < 0) {
		b *= -1;
		c = '-';
	}

	printf("%.2f%c%.2fi", a, c, b);
	return 0;
}