/**
 * Created by Ronn on 2/5/18
 * 1059. C语言竞赛
 */
#include <stdio.h>
#include <math.h>

//判断素数
int isPrime(int p) {
	int s = (int) sqrt(p);
	for (int i = 2; i <= s; i++) {
		if (p % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[10000] = {0};
	for (int i = 1; i <= n; i++) {
		int t;
		scanf("%d", &t);
		arr[t] = i;
	}

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);

		printf("%04d: ", t);
		if (arr[t] == -1)
			printf("Checked\n");
		else if (arr[t] == 0)
			printf("Are you kidding?\n");
		else {
			if (arr[t] == 1) printf("Mystery Award\n");
			else if (isPrime(arr[t])) printf("Minion\n");
			else printf("Chocolate\n");
			arr[t] = -1;
		}
	}
	return 0;
}