#include<stdio.h>
int main() {
	int i, j;
	for (i = 5; i > 0; i--) {
		for (j = i; j > 1; j--) {
			printf(" ");
		}
		for (j = i; j > 0; j--) {
			printf("%d",i);
		}
		printf("\n");
	}
}
