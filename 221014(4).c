#include<stdio.h>
int main() {
	int a = 0, b = 0;
	scanf("%d", &a);
	b = a % 2;
	if (b == 1) {
		printf("%d is a positive odd", a);
	}
	else if (b==-1) {
		printf("%d is a negative odd", a);
	}
	if (b == 0) {
		if (a < 0) {
			printf("%d is a negative even", a);
		}
		else if (a == 0) {
			printf("%d is zero", a);
		}
		else if (a > 0) {
			printf("%d is a positive even", a);
		}
	}
	return 0;
}