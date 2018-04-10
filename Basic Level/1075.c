/**
 * Created by Ronn on 12/28/17
 * 1075. 链表元素分类
 */
#include <stdio.h>

int main() {
	int start, n, k, end = -1;
	scanf("%d %d %d", &start, &n, &k);
	int data[100000] = {0}, next[100000] = {0};
	for (int i = 0; i < n; i++) {
		int addr;
		scanf("%d", &addr);
		scanf("%d %d", data + addr, next + addr);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = start; j != -1; j = next[j]) {
			if ((i == 0 && data[j] < 0) ||
			    (i == 1 && data[j] >= 0 && data[j] <= k) ||
			    (i == 2 && data[j] > k)) {
				if (end != -1) printf(" %05d\n", j);
				printf("%05d %d", j, data[j]);
				end = j;
			}
		}
	}
	printf(" -1");
	return 0;
}