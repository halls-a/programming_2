// �й��� ���ڿ��� �־����� ���г⵵�� ������ ��ȯ�ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int num() {

	char number[SIZE];
	int year = 0;

	for (int i = 0; i < SIZE; i++) {
		scanf("%c", number[i]);
	}
	for (int i = 0; i < 4; i++) {
		year += (int)number[i];
		year *= 10;
	}
	return year / 10;
}

int main() {

	printf("%d", num());

	return 0;
}