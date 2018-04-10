/**
 * Created by Ronn on 12/25/17
 * 1012. 数字分类
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
	//判断a3加减 记符合a4的个数
	int isPos = -1, cnt = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		switch (temp % 5) {
			case 0:
				if (temp % 2 == 0) a1 += temp;
				break;
			case 1:
				a2 = isPos ? a2 + temp : a2 - temp;
				isPos = !isPos;
				break;
			case 2:
				a3++;
				break;
			case 3:
				a4 += temp;
				cnt++;
				break;
			case 4:
				a5 = temp > a5 ? temp : a5;
				break;
		}
	}

	if (a1 != 0) printf("%d ", a1);
	else printf("N ");
	if (isPos != -1) printf("%d ", a2);
	else printf("N ");
	if (a3 != 0) printf("%d ", a3);
	else printf("N ");
	if (cnt != 0) printf("%.1f ", a4 * 1.0 / cnt);
	else printf("N ");
	if (a5 != 0) printf("%d", a5);
	else printf("N");
	return 0;
}