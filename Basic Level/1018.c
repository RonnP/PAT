/**
 * Created by Ronn on 12/31/17
 * 1018. 锤子剪刀布
 */
#include <stdio.h>

//胜负结果
int result(char a, char b) {
	int temp = 0;
	if (a != b) {
		switch (a) {
			case 'C':
				temp = b == 'J' ? 1 : -1;
				break;
			case 'J':
				temp = b == 'B' ? 1 : -1;
				break;
			default:
				temp = b == 'C' ? 1 : -1;
		}
	}
	return temp;
}

//转换
int cover(char c) {
	int t;
	if (c == 'C') t = 2;
	else if (c == 'J') t = 3;
	else t = 4;
	return t;
}

//最大值
char max(int x, int y, int z) {
	if (x >= y && x > z) return 'C';
	if (y > x && y > z) return 'J';
	return 'B';
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();

	//胜平负次数 锤子剪刀布胜利次数
	int na[5] = {0}, nb[5] = {0}, nc = 0;
	for (int i = 0; i < n; i++) {
		char a, b;
		scanf("%c %c", &a, &b);
		getchar();
		//printf("第%d次,a出%c,b出%c:  ",i+1,a,b);
		int t = result(a, b);
		if (t == 1) {//a胜利
			na[0]++;
			nb[1]++;
			na[cover(a)]++;
			//  printf("a胜利\n");
		} else if (t == -1) {//b胜利
			nb[0]++;
			na[1]++;
			nb[cover(b)]++;
			//printf("b胜利\n");
		} else {
			nc++;
			//printf("平\n");
		}
	}

	printf("%d %d %d\n", na[0], nc, na[1]);
	printf("%d %d %d\n", nb[0], nc, nb[1]);
	char maxa = max(na[2], na[3], na[4]);
	char maxb = max(nb[2], nb[3], nb[4]);
	printf("%c %c\n", maxa, maxb);
	return 0;
}