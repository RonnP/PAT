/**
 * L1-034. 点赞
 * Created by Ronn on 3/7/18
 */
#include <iostream>

using namespace std;

int main() {
	int n, arr[1000] = {0}, max = 0, id = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int f;
			cin >> f;
			arr[f - 1]++;
			if (arr[f - 1] > max) {
				max = arr[f - 1];
				id = f;
			} else if (arr[f - 1] == max && f > id)
				id = f;
		}
	}

	printf("%d %d", id, max);
	return 0;
}