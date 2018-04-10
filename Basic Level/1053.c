/**
 * Created by Ronn on 2/1/18
 * 1053. 住房空置率
 */
#include <stdio.h>

int main() {
	int n, d;
	double e;
	scanf("%d %lf %d", &n, &e, &d);
	int t1 = 0, t2 = 0;
	for (int i = 0; i < n; i++) {
		int k, t = 0;
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			double temp;
			scanf("%lf", &temp);
			if (temp < e) t++;
		}

		if (t > k / 2) {
			t1++;
			if (k > d){
				t2++;
				t1--;
			}
		}
	}

	printf("%.1f%% %.1f%%", t1 * 100.0 / n, t2 * 100.0 / n);
	return 0;
}