/**
 * Created by Ronn on 12/16/17
 * 1003. 我要通过
 */

#include <stdio.h>
#include <string.h>

int main() {
	int n, flag = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[100];
		scanf("%s", &str);

		int rightA = 0, leftA = 0, midA = 1;
		for (int j = 0; j < strlen(str); j++) {
			//字符串中必须仅有P, A, T这三种字符 不可以包含其它字符
			if (str[j] != 'P' && str[j] != 'A' && str[j] != 'T') {
				flag = 0;
				break;
			}

			if (flag == 0) {//判断P之前有多少个A
				if (str[j] == 'P') flag++;//flag=1;
				else if (str[j] == 'A') rightA++;
				else {
					flag = 0;
					break;
				}
			} else if (flag == 1) {
				if (str[j] == 'A') flag++;//flag=2;
				else {
					flag = 0;
					break;
				}
			} else if (flag == 2) {//判断PT中间有多少个A
				if (str[j] == 'A') midA++;
				else if (str[j] == 'T') flag++;
				else {
					flag = 0;
					break;
				}
			} else if (flag == 3) {//判断T后面有多少个A
				if (str[j] == 'A') leftA++;
				else {
					flag = 0;
					break;
				}
			}
		}

		//根据条件3判断
		if (rightA * midA != leftA) flag = 0;

		if (flag == 3) printf("YES\n");
		else printf("NO\n");
		flag = 0;
		rightA = 0;
		leftA = 0;
	}

	return 0;
}