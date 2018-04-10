/**
 * Created by Ronn on 1/2/18
 * 1020. 月饼
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct moonCake {
	float mount;//库存
	float total;//总售价
	float price;//单价
} mc;

int cmp(const void *pa, const void *pb) {
	struct moonCake *a, *b;
	a = (mc *) pa;
	b = (mc *) pb;
	return a->price < b->price ? 1 : -1;
}

int main() {
	//种类数 需求量
	int n, need;
	scanf("%d %d", &n, &need);

	mc cakes[n];
	//库存
	for (int i = 0; i < n; i++)
		scanf("%f", &cakes[i].mount);

	//总售价 单价
	for (int i = 0; i < n; i++) {
		float total;
		scanf("%f", &total);
		cakes[i].total = total;
		cakes[i].price = total / cakes[i].mount;
	}
	qsort(cakes, n, sizeof(mc), cmp);

	float sum = 0;
	for (int i = 0; i < n; i++) {
		float mount = cakes[i].mount;
		if (mount <= need)
			sum += cakes[i].total;
		else {
			sum += need * cakes[i].price;
			break;
		}
		need -= mount;
	}

	printf("%.2f", sum);
	return 0;
}