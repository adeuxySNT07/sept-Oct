#include<stdio.h>

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	int left = 0, right = 9;
	while (left <= right) {
		int leftIsOdd = a[left] % 2 == 1;
		int rightIsEven = a[right] % 2 == 0;
		if (leftIsOdd) {
			left++;
		}
		else if (rightIsEven) {
			right--;
		}
		else if (!leftIsOdd && !rightIsEven) {
			int temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}

	int start = 0, end = left;
	for (int i = start; i < end - 1; i++) {
		for (int j = start + 1; j < start + end - i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}

	start = left;
	end = 10;
	for (int i = start; i < end - 1; i++) {
		for (int j = start + 1; j < start + end - i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);                         /*%d后面加空格^_^*/
	}
	return 0;
}

