/**
 * Created by Ronn on 12/28/17
 * 1072. 开学寄语
 */
#include <stdio.h>

int n, m, arr[6];

int isItems(int num) {
	for (int i = 0; i < m; i++) {
		if (num == arr[i]) return 1;
	}

	return 0;
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &arr[i]);

	int stuTotal = 0, itemTotal = 0;
	for (int i = 0; i < n; i++) {
		char name[4];
		int k;
		scanf("%s %d", name, &k);
		int b[k], cnt = 0;
		for (int j = 0; j < k; j++) {
			int temp;
			scanf("%d", &temp);
			if (isItems(temp))
				b[cnt++] = temp;
		}

		if (cnt > 0) {
			printf("%s:", name);
			for (int j = 0; j < cnt; j++) {
				printf(" %04d", b[j]);
			}
			stuTotal++;
			itemTotal += cnt;
			printf("\n");
		}
	}

	printf("%d %d", stuTotal, itemTotal);
	return 0;
}