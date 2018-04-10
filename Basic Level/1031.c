/**
 * Created by Ronn on 1/13/18
 * 1031. 查验身份证
 */
#include <stdio.h>

//校验
int check(char *str) {
	int arrQ[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	int arrM[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
	int sum = 0;
	//校验前17位是否含X
	for (int i = 0; i < 17; i++) {
		if (str[i] == 'X') return 0;
		sum += arrQ[i] * (str[i] - 48);
	}

	//比对校验值
	sum %= 11;
	if (str[17] - 48 == arrM[sum]) return 1;
	if (str[17] == 'X' && sum == 2) return 1;
	return 0;
}

int main() {
	int n, flag = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[17];
		scanf("%s", str);
		if (!check(str)) {
			flag = 0;
			printf("%s\n", str);
		}
	}

	if (flag) printf("All passed\n");
	return 0;
}