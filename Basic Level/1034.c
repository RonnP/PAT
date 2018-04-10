/**
 * Created by Ronn on 1/16/18
 * 1034. 有理数四则运算
 */
#include <stdio.h>

struct fract {
	long long k;//带数
	long long a;//分子
	long long b;//分母
	int t;//判断正负数
};

//最大公约数
int maxDiv(long long a, long long b) {
	return b == 0 ? a : maxDiv(b, a % b);
}

//最简假分数
struct fract getFract(long long a, long long b) {
	struct fract f;
	f.t = a * b < 0 ? 0 : 1;
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	int m = maxDiv(a, b);
	a /= m;
	b /= m;

	long long k = a / b;
	a = a % b;

	f.k = k;
	f.a = a;
	f.b = b;
	return f;
}

//打印假分数
void printFract(struct fract f) {
	if (!f.t) printf("(-");
	if (f.k) {
		if (f.a != 0)
			printf("%lld %lld/%lld", f.k, f.a, f.b);
		else
			printf("%lld", f.k);
	} else {
		if (f.a != 0)
			printf("%lld/%lld", f.a, f.b);
		else
			printf("0");
	}
	if (!f.t) printf(")");
}

//打印运算结果
void prints(struct fract f1, struct fract f2, char c) {
	printFract(f1);
	printf(" %c ", c);
	printFract(f2);
	printf(" = ");

	long long b1 = f1.b, a1 = f1.k * b1 + f1.a;
	a1 = f1.t ? a1 : -a1;
	long long b2 = f2.b, a2 = f2.k * b2 + f2.a;
	a2 = f2.t ? a2 : -a2;

	switch (c) {
		case '+':
			printFract(getFract(a1 * b2 + b1 * a2, b1 * b2));
			break;
		case '-':
			printFract(getFract(a1 * b2 - b1 * a2, b1 * b2));
			break;
		case '*':
			printFract(getFract(a1 * a2, b1 * b2));
			break;
		default:
			if (f2.k == 0 && f2.a == 0) printf("Inf");
			else printFract(getFract(a1 * b2, b1 * a2));
			break;
	}
	printf("\n");
}

int main() {
	int a1, b1, a2, b2;
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);

	int m = maxDiv(a1, b1);
	a1 /= m;
	b1 /= m;
	m = maxDiv(a2, b2);
	a2 /= m;
	b2 /= m;


	struct fract f1 = getFract(a1, b1);
	struct fract f2 = getFract(a2, b2);

	prints(f1, f2, '+');
	prints(f1, f2, '-');
	prints(f1, f2, '*');
	prints(f1, f2, '/');
	return 0;
}