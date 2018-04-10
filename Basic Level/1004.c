/**
 * Created by Ronn on 12/17/17
 * 1004. 成绩排名
 */
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	char *maxName, *minName;
	char *maxId, *minId;
	int max = 0, min = 100;
	for (int i = 0; i < n; i++) {
		char tempName[10], tempId[10];
		int temp;
		scanf("%s %s %d", &tempName, &tempId, &temp);
		if (temp >= max) {
			maxName = strdup(tempName);
			maxId = strdup(tempId);
			max = temp;
		}

		if (temp <= min) {
			minName = strdup(tempName);
			minId = strdup(tempId);
			min = temp;
		}
	}

	printf("%s %s\n", maxName, maxId);
	printf("%s %s\n", minName, minId);
	return 0;
}