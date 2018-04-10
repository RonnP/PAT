/**
 * Created by Ronn on 12/27/17
 * 1014.福尔摩斯的约会
 */
#include <stdio.h>
#include <string.h>

int main() {
	char s1[60], s2[60], s3[60], s4[60];
	scanf("%s %s %s %s", s1, s2, s3, s4);
	int len1 = strlen(s1) > strlen(s2) ? strlen(s2) : strlen(s1);
	int len2 = strlen(s3) > strlen(s4) ? strlen(s4) : strlen(s3);

	int xq, hh, mm = 0;
	int flag = 0;
	for (int i = 0; i < len1; i++) {
		//判断第一对
		if (!flag && s1[i] >= 'A' && s1[i] <= 'G' && s1[i] == s2[i]) {
			xq = s1[i] - 65;
			flag = 1;
			continue;
		}

		//判断第二对
		if (flag && s1[i] == s2[i]) {
			if (s1[i] >= '0' && s1[i] <= '9') {
				hh = s1[i] - 48;
				break;
			} else if (s1[i] >= 'A' && s1[i] <= 'N') {
				hh = s1[i] - 55;
				break;
			}
		}
	}


	for (int i = 0; i < len2; i++) {
		if (s3[i] == s4[i] && ((s3[i] >= 'a' && s3[i] <= 'z') || (s3[i] >= 'A' && s3[i] <= 'Z'))) {
			mm = i;
			break;
		}
	}

	switch (xq) {
		case 0:
			printf("MON ");
			break;
		case 1:
			printf("TUE ");
			break;
		case 2:
			printf("WED ");
			break;
		case 3:
			printf("THU ");
			break;
		case 4:
			printf("FRI ");
			break;
		case 5:
			printf("SAT ");
			break;
		default:
			printf("SUN ");
			break;
	}

	printf("%02d:%02d", hh, mm);
	return 0;
}