// �� ���� �ڿ����� �Է¹޾� �� �� �� ������ Ȧ������ ���ؼ� ��ȯ�ϴ� �Լ� (��, �� �� ���� ����)

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