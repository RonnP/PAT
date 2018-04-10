/**
 * L1-043. 阅览室
 * Created by Ronn on 3/9/18
 */
#include <iostream>

using namespace std;

class Book {
public:
	int times;

	Book(int times = -1) : times(times) {}
};

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		Book books[1000];
		int cnt = 0, total = 0;
		while (true) {
			int id, hh, mm;
			char c;
			scanf("%d %c %d:%d", &id, &c, &hh, &mm);

			if (id == 0) break;

			Book &book = books[id - 1];
			if (c == 'S')
				book.times = hh * 60 + mm;
			else if (c == 'E') {
				if (book.times >= 0) {
					cnt++;
					total += hh * 60 + mm - book.times;
					book.times = -1;
				}
			}
		}

		if (cnt)
			printf("%d %.0f\n", cnt, total * 1.0 / cnt);
		else cout << "0 0" << endl;
	}
	return 0;
}