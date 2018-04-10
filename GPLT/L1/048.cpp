/**
 * L1-048. 矩阵A乘以B
 * Created by Ronn on 3/10/18
 */
#include <iostream>

using namespace std;

int main() {
	int ca, ra, cb, rb;

	cin >> ra >> ca;
	int a[ra][ca];
	for (int i = 0; i < ra; i++) {
		for (int j = 0; j < ca; j++)
			cin >> a[i][j];
	}

	cin >> rb >> cb;
	int b[rb][cb];
	for (int i = 0; i < rb; i++) {
		for (int j = 0; j < cb; j++)
			cin >> b[i][j];
	}

	if (ca == rb) {
		printf("%d %d\n", ra, cb);
		for (int i = 0; i < ra; i++) {
			for (int j = 0; j < cb; j++) {
				long sum = 0;

				for (int k = 0; k < ca; k++)
					sum += a[i][k] * b[k][j];

				if (j) cout << " ";
				cout << sum;
			}
			cout << endl;
		}
	} else
		printf("Error: %d != %d", ca, rb);
	return 0;
}