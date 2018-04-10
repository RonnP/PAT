/**
 * Created by Ronn on 1/29/18
 * 1047. 编程团体赛
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[1000] = {0}, maxDui = 0, maxScore = 0;
	for (int i = 0; i < n; i++) {
		int a, b, score;
		scanf("%d-%d %d", &a, &b, &score);
		arr[a] += score;
		if (arr[a] >= maxScore) {
			maxDui = a;
			maxScore = arr[a];
		}
	}

	printf("%d %d", maxDui, maxScore);
	return 0;
}