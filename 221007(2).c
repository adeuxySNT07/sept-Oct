#include<stdio.h>
int main() {
	int InputX = 0, i = 0;
	while (InputX !=25) {		/*这里一开始把！=打成了==！，好久都没发现*/
		scanf("%d", &InputX);
		if (InputX > 25) {
			printf("Wrong!Too high!\n");
			i++;
		}
		else if (InputX < 25) {
			printf("Wrong!Too low!\n");
			i++;
		}
		else if (InputX == 25) {
			i++;
			printf("Right!\nYou guess %d times\nThe game is over!", i);
		}

	}
	return 0;
}