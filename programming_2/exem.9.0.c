// 두 개의 3x3 행렬을 입력받아 행렬덧셈 결과행렬을 반환하는 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int *input() {

	int first_arr[3][3] = { 0 }, num, second_arr[3][3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &num);
			first_arr[i][j] = num;
		}
	}
	printf("첫 번째 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", first_arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &num);
			second_arr[i][j] = num;
		}
	}
	printf("두 번째 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", second_arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			first_arr[i][j] += second_arr[i][j];
		}
	}

	return (int*)first_arr;
}



int main() {

	int *ptr = input();

	printf("행렬 합:\n");
	for (int i = 0; i < 9; i++) {
		printf("%d\t", *(ptr + i));
		if (i % 3 == 2) printf("\n");
	}

	return 0;
}