/**
 * Created by Ronn on 1/26/18
 * 1044. 火星数字
 */
#include <stdio.h>
#include <string.h>

int main() {
	char *hx1[] = {"jan", "feb", "mar", "apr", "may", "jun",
				   "jly", "aug", "sep", "oct", "nov", "dec"};
	char *hx2[] = {"tam", "hel", "maa", "huh", "tou", "kes",
				   "hei", "elo", "syy", "lok", "mer", "jou"};

	int n = 4;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[7];
		getchar();
		scanf("%[^\n]", str);

		int temp = 0, len = strlen(str);
		if (str[0] >= '0' && str[0] <= '9') {
			for (int j = 0; j < len; j++)
				temp = temp * 10 + str[j] - 48;
			if (temp == 0) printf("tret\n");
			else if (temp <= 12) printf("%s\n", hx1[temp - 1]);
			else if (temp % 13 == 0) printf("%s\n", hx2[temp / 13 - 1]);
			else
				printf("%s %s\n", hx2[temp / 13 - 1], hx1[temp % 13 - 1]);
		} else {
			char *t;
			if (len > 4) {
				t = strdup(str + 4);
				for (int j = 0; j < 12; j++) {
					if (strcmp(t, hx1[j]) == 0) {
						temp = j + 1;
						break;
					}
				}
				str[3] = 0;
			}

			t = strdup(str);
			for (int j = 0; j < 12; j++) {
				if (strcmp(t, hx2[j]) == 0) {
					temp += (j + 1) * 13;
					break;
				}
			}

			if (temp == 0) {
				for (int j = 0; j < 12; j++) {
					if (strcmp(t, hx1[j]) == 0) {
						temp = j + 1;
						break;
					}
				}
			}

			printf("%d\n", temp);
		}
	}
	return 0;
}