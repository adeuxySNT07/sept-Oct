#include<stdio.h>
int main() {
	int x = 25;
	int Inputx;
	scanf("%d", &Inputx);
	if (Inputx > 25) {
		printf("Wrong!Too high!\nThe number is:25");
	}
	else if (Inputx < 25) {
		printf("Wrong!Too low!\nThe number is:25");
	}
	else if (Inputx=25) {
		printf("Right!\nThe number is:25");
	}
	return 0;
}