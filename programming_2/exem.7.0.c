// ���ڿ��� �ϳ��� ���ڸ� �޾� ���ڿ����� �� ���ڰ� ��ġ�� ��� ã�� �ֿܼ� ����ϰ� 
// �� ������ ��ȯ�ϴ� �Լ� (��: Hello, l -> 2,3 ����ϰ� 2�� ��ȯ)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int string() {

	int count = 0, index = 0;
	char mjy[20], find;

	while (1) {
		scanf("%c", &mjy[index]);

		if (mjy[index] == ' ') {
			break;
		}
		index++;
	}
	scanf("%c", &find);
	
	for (int i = 0; i <= index + 1; i++) {
		if (mjy[i] == find) {
			printf("%d ", i);
			count++;
		}
	}

	return count;
}

int main() {

	printf("\n%d", string());

	return 0;
}