/**
 * Created by Ronn on 1/1/18
 * 1019. 数字黑洞
 */
#include <stdio.h>
#include <stdlib.h>

//升序
int cmp1(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);  //升序
}

//降序
int cmp2(const void *a, const void *b) {
	return (*(int *) b - *(int *) a); //降序
}

int main() {
	int n;
	scanf("%d", &n);
	while (1) {
		int temp = n;
		//转换为数组
		int arr1[4], arr2[4];
		for (int i = 0; i < 4; i++) {
			arr1[i] = arr2[i] = temp % 10;
			temp /= 10;
		}

		//求最大值和最小值
		int max = 0, min = 0;
		qsort(arr1, 4, sizeof(int), cmp2);
		qsort(arr2, 4, sizeof(int), cmp1);
		for (int i = 0; i < 4; i++) {
			max = max * 10 + arr1[i];
			min = min * 10 + arr2[i];
		}

		//打印
		n = max - min;
		printf("%04d - %04d = %04d\n", max, min, n);
		if (n == 0 || n == 6174) break;
	}
	return 0;
}