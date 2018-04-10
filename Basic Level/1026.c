/**
 * Created by Ronn on 1/8/18
 * 1026. 程序运行时间
 */
#include <stdio.h>

int main() {
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	int ss = (c2 - c1 + 50) / 100;
	int hh = ss / 3600;
	ss %= 3600;
	int mm = ss / 60;
	ss %= 60;
	printf("%02d:%02d:%02d", hh, mm, ss);
	return 0;
}