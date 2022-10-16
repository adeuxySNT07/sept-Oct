#include<stdio.h>

int factorial(int n) {
	int i;
	int factorial = 1;
	for (i = 1; i <= n; i++) {
		factorial *= i;
	}
	return factorial;
}

int main() {

	int j;
	long long sum = 0;
	for (j = 1; j <= 10; j++) {

		sum += factorial(j);
	}
	printf("%d", sum);
	return 0;
}