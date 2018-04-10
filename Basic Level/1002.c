/**
 * Created by Ronn on 12/15/17
 * 1002. 写出这个数
 */
#include <stdio.h>

//转换拼音
void pinyin(int n) {
	switch (n) {
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		default:
			printf("jiu");
			break;
	}
}

int main() {
	char c;
	int sum = 0;
	while ((c = getchar()) != '\n') {
		sum += c - 48;
	}

	int flag = 0;
	if (sum / 100 != 0) {
		pinyin(sum / 100);
		printf(" ");
		sum %= 100;
		flag = 1;
	}

	if (flag == 1 || sum / 10 != 0) {
		pinyin(sum / 10);
		printf(" ");
		sum %= 10;
	}

	pinyin(sum);
	return 0;
}