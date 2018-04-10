/**
 * Created by Ronn on 12/27/17
 * 1073. 多选题常见计分法
 */
#include <stdio.h>

typedef struct prob {
	int score, answer, wrong;
} prob;

int getAnswer() {
	char c;
	int cnt, answer = 0;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		while ((c = getchar()) == ' ');
		answer |= 1 << (c - 'a');
	}
	return answer;
}

int main() {
	int n, m, max = 0;
	scanf("%d %d", &n, &m);
	prob ps[m];
	int wrongAns[m][5];


	//接收正确答案
	for (int i = 0; i < m; i++) {
		int a;
		scanf("%d %d", &ps[i].score, &a);
		ps[i].answer = getAnswer();
		ps[i].wrong = 0;
	}

	//接收学生答案
	for (int i = 0; i < n; i++) {
		float score = 0;
		for (int j = 0; j < m; j++) {
			while (getchar() != '(');

			int ans = getAnswer();
			ps[j].wrong = ans ^ ps[j].answer;
			if (ps[j].wrong == 0) score += ps[j].score;
			else if ((ps[j].wrong | ps[j].answer) == ps[j].answer)
				score += ps[j].score * 0.5;

			for (int k = 0; k < 5; k++) {
				if (i == 0) wrongAns[j][k] = 0;
				wrongAns[j][k] += ps[j].wrong >> k & 1;
				if (wrongAns[j][k] > max) max = wrongAns[j][k];
			}

			while (getchar() != ')');
		}
		printf("%.1f\n", score);
	}

	if (max == 0) printf("Too simple");
	else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < 5; j++) {
				if (wrongAns[i][j] == max)
					printf("%d %d-%c\n", max, i + 1, j + 'a');
			}
		}
	}

	return 0;
}