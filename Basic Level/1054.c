/**
 * Created by Ronn on 2/1/18
 * 1054. 求平均值
 */
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	int k = 0;//合法输入个数
	double sum = 0;//和
	for (int i = 0; i < n; i++) {
		char strA[50], strB[50];
		double x = 0;
		scanf("%s", strA);
		sscanf(strA, "%lf", &x);
		sprintf(strB, "%.2lf", x);

		int flag = 1;
		for (int j = 0; j < strlen(strA); j++) {
			if (strA[j] != strB[j]) {
				flag = 0;
				break;
			}
		}

		if (!flag || x < -1000 || x > 1000)
			printf("ERROR: %s is not a legal number\n", strA);
		else {
			k++;
			sum += x;
		}
	}

	if (k == 1)
		printf("The average of 1 number is %.2f\n", sum);
	else if (k == 0)
		printf("The average of 0 numbers is Undefined\n");
	else
		printf("The average of %d numbers is %.2f\n", k, sum / k);
	return 0;
}