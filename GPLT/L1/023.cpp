/**
 * L1-023. 输出GPLT
 * Created by Ronn on 3/5/18
 */
#include <iostream>

using namespace std;

int main() {
	char c, str[] = "GPLT";
	int arr[4] = {0}, max = 0;
	while ((c = getchar()) != '\n') {
		if (c == 'G' || c == 'g') {
			arr[0]++;
			if (arr[0] > max) max = arr[0];
		} else if (c == 'P' || c == 'p') {
			arr[1]++;
			if (arr[1] > max) max = arr[1];

		} else if (c == 'L' || c == 'l') {
			arr[2]++;
			if (arr[2] > max) max = arr[2];
		} else if (c == 'T' || c == 't') {
			arr[3]++;
			if (arr[3] > max) max = arr[3];
		}
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 4; j++) {
			if (i < arr[j]) cout << str[j];
		}
	}

	return 0;
}