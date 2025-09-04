#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute() {
	int a, b, max;

	scanf("%d %d", &a, &b);

	printf("%d %d %d\n", a + b, a << b, a * b);

	if ((a + b) > (a * b) || (a + b) > (a << b)) {
		max = a + b;
	}
	else {
		if ((a * b) < (a << b)) {
			max = a << b;
		}
		else {
			max = a * b;
		}
	}
	return max;
}

int main() {

	printf("%d", compute());

	return 0;
}