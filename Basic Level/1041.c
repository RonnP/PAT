/**
 * Created by Ronn on 1/23/18
 */
#include <stdio.h>
#include <string.h>

struct card {
	char *id;
	int t;
};

int main() {
	int n, k;
	scanf("%d", &n);
	struct card cards[n];

	for (int i = 0; i < n; i++) {
		int t, temp;
		char id[14];
		scanf("%s %d %d", id, &temp, &t);
		cards[temp].id = strdup(id);
		cards[temp].t = t;
	}

	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		int temp;
		scanf("%d", &temp);
		printf("%s %d\n", cards[temp].id, cards[temp].t);
	}
	return 0;
}