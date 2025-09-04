#include <stdio.h>

int main() {

	int five = 5;
	double two_point_one_four = 2.14;
	char hello[6] = "hello";
	char num[4] = { 1, 2, 3, 4 };
	char fruit[4][128] = { "Apple", "Banana", "Cherry", "Durian" };
	const double Pi = 3.141592;

	struct myself{
		char name[128];
		char cell_phone[20];
		int age;
	} my = { "¿¸±‚¡ÿ", "010-3224-8607", 21 };

	return 0;
}