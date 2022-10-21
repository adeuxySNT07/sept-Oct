#include<stdio.h>
int main() {
	for (int j = 1; j <= 9; j++) {
		for (int i = 1; i <= 9; i++) {
			int m = i * j;
			printf("%d\t", m);
		}
		printf("\n");
	}
	return 0;
}