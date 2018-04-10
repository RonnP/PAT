/**
 * Created by Ronn on 1/9/18
 * 1027. 打印沙漏
 */
#include <stdio.h>
#include <math.h>

//打印第i行
void print(char c, int i, int k) {
	for (int j = 0; j < (2 * k - 1 - i) / 2; j++) printf(" ");
	for (int j = 0; j < i; j++) printf("%c", c);
	printf("\n");
}

int main() {
	int n;
	char c;
	scanf("%d %c", &n, &c);
	int k = sqrt((n + 1) / 2);//行数
	for (int i = 2 * k - 1; i > 0; i -= 2) print(c, i, k);
	for (int i = 3; i <= 2 * k - 1; i += 2) print(c, i, k);
	int temp = n - 2 * k * k + 1;
	printf("%d\n", temp);
	return 0;
}