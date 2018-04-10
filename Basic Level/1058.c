/**
 * Created by Ronn on 2/4/18
 * 1058. 选择题
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


	//接收正确答案
	for (int i = 0; i < m; i++) {
		int a;
		scanf("%d %d", &ps[i].score, &a);
		ps[i].answer = getAnswer();
		ps[i].wrong = 0;
	}

	//接收学生答案
	for (int i = 0; i < n; i++) {
		int score = 0;
		for (int j = 0; j < m; j++) {
			while (getchar() != '(');
			if (getAnswer() == ps[j].answer)
				score += ps[j].score;
			else if (max < ++ps[j].wrong)
				max = ps[j].wrong;
			while (getchar() != ')');
		}
		printf("%d\n", score);
	}

	if (max == 0) printf("Too simple");
	else {
		printf("%d", max);
		for (int i = 0; i < m; i++) {
			if (ps[i].wrong == max)
				printf(" %d", i + 1);
		}
	}
	return 0;
}