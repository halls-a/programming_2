#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print() {
	int num, result, remain;
	int bi[8] = { 0 };

	scanf("%d", &num);

	result = num;

	int i = 0;

	while (i < 8) {

		remain = result % 2;
		result /= 2;

		bi[i] = remain;
		i++;
	}

	printf("%d, ", num);
	for (int j = 7; j >= 0; j--) {
		printf("%d", bi[j]);
	}
	printf(", %o, %x", num, num);
}

int main() {

	print();

	return 0;
}