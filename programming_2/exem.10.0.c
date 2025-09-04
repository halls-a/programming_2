// 학번이 문자열로 주어지면 입학년도를 정수로 반환하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number() {
	
	int result = 0, count = 3;
	char num[20];

	scanf("%s", num);

	for (int i = 0; i < 4; i++) {
		int n = 1;
		for (int j = 0; j < count; j++) {
			n *= 10;
		}
		result += (num[i] - '0') * n;
		count--;
	}

	return result;
}


int main() {

	printf("입학 년도 : %d", number());

	return 0;
}
