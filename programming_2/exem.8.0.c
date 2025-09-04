// 두 개의 자연수를 입력받아 그 두 수 사이의 홀수만을 더해서 반환하는 함수 (단, 그 두 수도 포함)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum() {

	int a, b, num, result = 0;

	scanf("%d %d", &a, &b);

	num = a + 1;
	while (a < num && num < b) {
		if (num % 2 == 1) {
			result += num;
		}
		num++;
	}

	return result + a + b;
}

int main() {

	printf("%d", sum());

	return 0;
}