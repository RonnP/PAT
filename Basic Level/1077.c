/**
 * Created by Ronn on 12/29/17
 * 1077. 互评成绩计算
 */
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		float g2;//老师的评分
		scanf("%f", &g2);
		/**
		 * max 最高分 min 最低分
		 * sum 总分   cnt 合法个数
		 */
		int max = 0, min = m, sum = 0, cnt = 0;
		for (int j = 1; j < n; j++) {
			int score;
			scanf("%d", &score);
			if (score >= 0 && score <= m) {
				if (score > max) max = score;
				if (score < min) min = score;
				sum += score;
				cnt++;
			}
		}

		float g1 = (sum - max - min) / (cnt - 2);
		printf("%d\n", (int) (g1 + g2 + 1) / 2);
	}
	return 0;
}