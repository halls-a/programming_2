#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum() {

	int num, result = 0, cal, count = 1;

	scanf("%d", &num);

	while (num > 0) {
		cal = num;
		while (cal > 9) {
			cal /= 10;
			count *= 10;
		}
		result += cal;
		num -= cal * count;
		count = 1;
	}

	return result;
}

int main() {

	printf("%d", sum());

	return 0;
}