// �̸�, ����, ��ȭ��ȣ�� ������ ����ó�� �ݺ������� �Է¹޾� �����ϰ� 
// ���� �̸��̳� ���̸� 0�� �Է��ϸ� �Է��� �ߴ��ϰ� �Է¹��� ����� ��ȯ�ϴ� �Լ��� 
// �Է� ���� ����ó ����� �޾� �ֿܼ� ����ϴ� �Լ� �ۼ��� �� �Է¹޾� ����ϴ� �׽�Ʈ �ڵ� �ۼ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input() {
	struct list {
		char name[20][20];
		int age[20];
		char phone[20][20];
	}intro;

	int i = 0;

	while (i < 20) {
		scanf("%s %d %s", &intro.name[i], &intro.age[i], &intro.phone[i]);
		i++;
	}


}

int main() {
	
	return 0;
}