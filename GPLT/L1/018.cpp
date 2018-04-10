/**
 * L1-018. 大笨钟
 * Created by Ronn on 3/4/18
 */
#include <iostream>

using namespace std;

int main() {
	int hh, mm;
	scanf("%d:%d", &hh, &mm);
	int t = hh;
	if (mm > 0) t++;
	if (hh <= 12) printf("Only %02d:%02d.  Too early to Dang.\n", hh, mm);
	else {
		t -= 12;
		for (int i = 0; i < t; i++) {
			cout << "Dang";
		}
	}
	return 0;
}