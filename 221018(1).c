#include<stdio.h>
int main() {
	int year = 0;
	float deposit = 0;
	for (year = 1; year < 6; year++) {
		deposit = (deposit + 1000) / (1 + 12 * 0.0063);
	}
	printf("%.2f", deposit);
	return 0;
}