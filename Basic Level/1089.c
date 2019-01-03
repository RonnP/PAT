/**
 * 1089 狼人杀-简单版
 * Created by Ronn on 9/9/18
 */

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int flag = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) { // i和j 表示狼人的编号
			// 说谎人数和说谎的狼人数
			int cnt = 0, lang = 0;
			for (int k = 0; k < n; k++) {
				if (arr[k] < 0 && arr[k] + i != 0 && arr[k] + j != 0) {
					if (k == i - 1 || k == j - 1) lang++;
					cnt++;
				} else if (arr[k] > 0 && (arr[k] == i || arr[k] == j)) {
					if (k == i - 1 || k == j - 1) lang++;
					cnt++;
				}

			}

			if (cnt == 2 && lang == 1) {
				flag = 1;
				printf("%d %d", i, j);
				break;
			}
		}
		if (flag) break;
	}

	if (!flag) printf("No Solution");
	return 0;
}