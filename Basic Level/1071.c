/**
 * Created by Ronn on 12/28/17
 * 1071. 小赌怡情
 */
#include <stdio.h>

int main() {
	int total, k;
	scanf("%d %d", &total, &k);
	for (int i = 0; i < k; i++) {
		int n1, b, t, n2;
		scanf("%d %d %d %d", &n1, &b, &t, &n2);

		if (t > total) {//判断筹码是否足够
			printf("Not enough tokens.  Total = %d.\n", total);
			continue;
		}

		if (n1 < n2 == b) {//判断玩家是否猜对
			total += t;
			printf("Win %d!  Total = %d.\n", t, total);
		} else {
			total -= t;
			printf("Lose %d.  Total = %d.\n", t, total);

			//如果筹码用完 游戏结束
			if (total <= 0) {
				printf("Game Over.");
				break;
			}
		}
	}
	return 0;
}