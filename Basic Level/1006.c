/**
 * Created by Ronn on 12/19/17
 * 1006. 换个格式输出整数
 */
#include <stdio.h>

/**
 * 打印指定字符
 * n 表示打印几次
 * c 表示指定字符
 */
void print(int n, char c) {
	for (int i = 0; i < n; i++) {
		printf("%c", c);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	//百位数
	int a = n / 100;
	print(a, 'B');
	//十位数
	int b = n % 100 / 10;
	print(b, 'S');
	//个位数
	int c = n % 10;
	for (int i = 1; i <= c; i++) {
		printf("%d", i);
	}
	return 0;
}