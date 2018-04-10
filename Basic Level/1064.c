/**
 * Created by Ronn on 2/10/18
 * 1064. 朋友数
 */
#include <stdio.h>

//朋友证号
int getNum(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	//int n = 8;
	int arr[8] = {123, 899, 51, 998, 27, 33, 36, 12};
	//6 26 6 26 9 6 9 3
	for (int i = 0; i < 8; i++) {
		int t = arr[i];
		printf("%d的朋友数是：%d\n ", t, getNum(t));
	}
	return 0;
}