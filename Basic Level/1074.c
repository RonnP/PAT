/**
 * Created by Ronn on 12/28/17
 * 1074. 宇宙无敌加法器
 */
#include <stdio.h>

int get(int *p) {
	char c;
	int t = 0;
	while ((c = getchar()) != '\n')
		p[t++] = c - '0';
	return t;
}

/**
 * p   数组
 * cnt 移动位数
 * len 数组长度
 */
void upd(int *p, int cnt, int len) {
	if (cnt == 0) return;
	for (int i = len - 1; i >= 0; i--) {
		p[i + cnt] = p[i];
		p[i] = 0;
	}
}

int main() {
	int a[20] = {0}, b[20] = {0}, c[20] = {0};
	int aLen = get(a), bLen = get(b), cLen = get(c);
	upd(b, aLen - bLen, bLen);
	upd(c, aLen - cLen, cLen);

	int d[30] = {0}, temp = 0, t = 0;
	for (int i = aLen - 1; i >= 0; i--) {
		if (a[i] == 0) a[i] = 10;
		int sum = temp + b[i] + c[i];
		d[t++] = sum % a[i];
		temp = sum / a[i];
	}

	d[t] = temp;
	int flag = 1;
	for (int i = t; i >= 0; i--) {
		if (flag) {
			if (d[i] == 0) continue;
			flag = 0;
		}
		printf("%d", d[i]);
	}

	if (flag) printf("0");
	return 0;
}