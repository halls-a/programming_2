// 문자열과 하나의 문자를 받아 문자열에서 그 문자가 위치를 모두 찾아 콘솔에 출력하고 
// 그 갯수를 반환하는 함수 (예: Hello, l -> 2,3 출력하고 2를 반환)

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