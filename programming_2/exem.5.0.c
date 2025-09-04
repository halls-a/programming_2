#include <stdio.h>

void sum_num() {

	int n = 5, m = 12, sum = 0;

	for (n; n <= m; n++) {
		sum += n;
	}
	printf("%d", sum);
}

int main() {

	sum_num();

	return 0;
}