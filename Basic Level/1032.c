/**
 * Created by Ronn on 1/14/18
 * 1032. 挖掘机技术哪家强
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[n], max[2] = {0};
	for (int i = 0; i < n; i++)
		arr[i] = 0;

	for (int i = 0; i < n; i++) {
		int num, score;
		scanf("%d %d", &num, &score);
		arr[num - 1] += score;
		if (max[1] < arr[num - 1]) {
			max[0] = num;
			max[1] = arr[num - 1];
		}
	}

	printf("%d %d", max[0], max[1]);
	return 0;
}