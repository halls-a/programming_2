// 이름, 나이, 전화번호로 구성된 연락처를 반복적으로 입력받아 저장하고 
// 만약 이름이나 나이를 0을 입력하면 입력을 중단하고 입력받은 목록을 반환하는 함수와 
// 입력 받은 연락처 목록을 받아 콘솔에 출력하는 함수 작성한 후 입력받아 출력하는 테스트 코드 작성
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