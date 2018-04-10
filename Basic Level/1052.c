/**
 * Created by Ronn on 2/1/18
 * 1052. 卖个萌
 */
#include <stdio.h>

int main() {
	char strs[3][10][5] = {0}, c;
	int len[3];
	for (int i = 0; i < 3; i++) {
		int j = 0;
		for (; (c = getchar()) != '\n';) {
			if (c == '[') scanf("%[^]]", strs[i][j++]);
		}
		len[i] = j;
	}

	int n, flag = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int arr[5];
		scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
		for (int j = 0; j < 5; j++) {
			int t = j;
			if (t == 3) t = 1;
			else if (t == 4) t = 0;

			if (arr[j] > len[t] || arr[j] <= 0) {
				flag = 0;
				break;
			}
		}

		if (flag)
			printf("%s(%s%s%s)%s\n", strs[0][arr[0] - 1], strs[1][arr[1] - 1],
				   strs[2][arr[2] - 1], strs[1][arr[3] - 1], strs[0][arr[4] - 1]);
		else printf("Are you kidding me? @\\/@\n");
	}

	return 0;
}