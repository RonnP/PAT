/**
 * Created by Ronn on 2/1/18
 * 1055. 集体照
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	char name[9];
	int heigt;
} stu;

int cmp(const void *pa, const void *pb) {
	struct student *a, *b;
	a = (stu *) pa;
	b = (stu *) pb;

	if (a->heigt != b->heigt)//按身高排序
		return b->heigt - a->heigt;
	else //按名字排序
		return strcmp(a->name, b->name);
}

void printRow(stu *stus, int len, int start) {
	//左
	for (int i = len / 2 * 2 - 1; i > 0; i -= 2)
		printf("%s ", stus[i + start].name);

	//右
	for (int i = 0; i < len; i += 2)
		printf("%s%c", stus[i + start].name, i + 2 < len ? ' ' : '\n');
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	stu stus[n];
	for (int i = 0; i < n; i++)
		scanf("%s %d", stus[i].name, &stus[i].heigt);

	qsort(stus, n, sizeof(stu), cmp);

	int len = n % k + n / k;
	printRow(stus, len, 0);
	for (int i = len; i < n; i += n / k)
		printRow(stus, n / k, i);
	return 0;
}