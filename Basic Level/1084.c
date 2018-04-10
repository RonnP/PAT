/**
 * Created by Ronn on 3/19/18
 * 1084. 外观数列
 */
#include <stdio.h>
#include <string.h>

int main() {
	int d, n;
	scanf("%d %d", &d, &n);
	char a[100000], b[100000] = "\0";
	a[0] = d + '0';
	for (int i = 1; i < n; i++) {
		char temp[3];
		int t = 1, len = strlen(a);
		for (int j = 1; j <= len; j++) {
			if (j == len || a[j] != a[j - 1]) {
				temp[0] = a[j - 1];
				temp[1] = t + '0';
				temp[2] = '\0';
				strcat(b, temp);
				t = 1;
			} else t++;
		}
		strcpy(a, b);
		strcpy(b, "\0");
	}
	printf("%s\n", a);
	return 0;
}