/**
 * Created by Ronn on 1/20/18
 * 1038. 统计同成绩学生
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int score[101] = {0};
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		score[temp]++;
	}

	int k;
	scanf("%d", &k);
	int sel[k];
	for (int i = 0; i < k; i++) {
		int temp;
		scanf("%d", &temp);
		sel[i] = score[temp];
	}

	for (int i = 0; i < k; i++) {
		if (i) printf(" ");
		printf("%d", sel[i]);
	}


	return 0;
}