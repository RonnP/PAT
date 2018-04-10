/**
 * Created by Ronn on 12/18/17
 * 1005. 继续(3n+1)猜想
 */
#include <stdio.h>
#include <stdlib.h>

int arrCheck[100];
int cnt = 0;

//是否已经通过验证
int isCheckNum(int n) {
	for (int i = 0; i < cnt; i++) {
		//已经通过验证
		if (n == arrCheck[i]) return 1;
	}
	//未通过验证
	return 0;
}

void check(int n) {
	while (n != 1) {
		n = n % 2 ? (3 * n + 1) / 2 : n / 2;
		if (n > 100) continue;
		//如果该数已经通过验证
		//那么往下验证的数一定已经通过验证
		//故 如果已验证 就结束整个循环
		if (isCheckNum(n)) break;
		arrCheck[cnt] = n;
		cnt++;
	}
}

int cmp(const void *a, const void *b) {
	// return(*(int *)a-*(int *)b);  //升序
	return (*(int *) b - *(int *) a); //降序
}

int main() {
	int k;
	scanf("%d", &k);
	int arr[k], t = 0;
	for (int i = 0; i < k; i++) {
		int n;
		scanf("%d", &n);
		//判断是否已经验证过 未验证则往arrCheck里添加验证数
		if (!isCheckNum(n)) {
			arr[t] = n;
			t++;
			check(n);
		}
	}

	//检查遗漏的验证数
	for (int i = 0; i < t; i++) {
		//如果已验证 则赋值为0
		if (isCheckNum(arr[i])) arr[i] = 0;
	}

	qsort(arr, t, sizeof(int), cmp);
	//打印
	for (int i = 0; i < t; i++) {
		if (arr[i] != 0) {
			if (i != 0) printf(" ");
			printf("%d", arr[i]);
		} else break;
	}
	return 0;
}