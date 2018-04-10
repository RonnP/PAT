/**
 * L1-042. 日期格式化
 * Created by Ronn on 3/9/18
 */
#include <iostream>

using namespace std;

int main() {
	int yy, mm, dd;
	scanf("%d-%d-%d", &mm, &dd, &yy);
	printf("%04d-%02d-%02d", yy, mm, dd);
	return 0;
}