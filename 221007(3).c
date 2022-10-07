#include<stdio.h>
int main() {
	int Input = 0, i = 1;
	for (i = 1; Input != 25 && i < 6; i++) {
		scanf("%d", &Input);
		if (Input < 25) {
			printf("Wrong!Too low!\n");
		}
		else if (Input > 25) {
			printf("Wrong!Too high!\n");
		}
		else if (Input = 25) {
			printf("Right!\n");
		}

	}
	printf("You guess %d times\nThe game is over!", i-1);
	return 0;
}