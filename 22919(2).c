#include<stdio.h>
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 10 - i; j++) {
			int leftIsEven = a[j - 1] % 2 == 0;
			int rightIsEven = a[j] % 2 == 0;
			if ((leftIsEven && !rightIsEven) ||
				(leftIsEven == rightIsEven && a[j - 1] > a[j])) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);                                /*%d后面加空格^_^*/
	}
	return 0;
}
