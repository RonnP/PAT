/**
 * Created by Ronn on 12/27/17
 * 1069. 微博转发抽奖
 */
#include <stdio.h>
#include <string.h>

typedef struct String {
	char *name;
} String;

String strs[1000];

int isRepeat(char *str, int cnt) {
	for (int i = 0; i < cnt; i++) {
		if (strcmp(strs[i].name, str) == 0) return 0;
	}
	return 1;
}

int main() {
	int m, n, s;
	scanf("%d %d %d", &m, &n, &s);
	int flag = 0, cnt = 0;
	for (int i = 1; i <= m; i++) {
		char name[20];
		scanf("%s", name);
		if (s == i) {
			if (isRepeat(name, cnt)) {
				printf("%s\n", name);
				strs[cnt++].name = strdup(name);
				flag = 1;
				s += n;
			} else s++;

		}
	}

	if (!flag) printf("Keep going...");
	return 0;
}