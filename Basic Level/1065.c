/**
 * Created by Ronn on 12/26/17
 * 1065. 单身狗
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
	int comp, isJoin;
} p;

// 升序
int cmp(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);
}

int main() {
	int n;
	scanf("%d", &n);
	p ps[200000];
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		ps[a].comp = b + 1;
		ps[b].comp = a + 1;
	}

	scanf("%d", &n);
	int arr[n], cnt = 0, count = n;
	for (int i = 0; i < n; i++) {
		arr[i] = -1;
		int t;
		scanf("%d", &t);
		ps[t].isJoin = 1;

		int temp = ps[t].comp - 1;
		if (temp == -1) arr[cnt++] = t;
		else {
			if (!ps[temp].isJoin) arr[cnt++] = t;
			else count -= 2;
		}
	}

	qsort(arr, cnt, sizeof(int), cmp);
	printf("%d\n", count);
	int flag = 0;
	for (int i = 0; i < cnt; i++) {
		if (arr[i] == -1) continue;
		int t = ps[arr[i]].comp - 1;
		if (t == -1 || !ps[t].isJoin) {
			if (flag) printf(" ");
			printf("%05d", arr[i]);
			flag = 1;
		}
	}
	return 0;
}