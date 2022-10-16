#include<stdio.h>
int main() {

	int j = 0, i = 0, media = 0;
	int a[10];
	for (j = 0; j < 10; j++) {
		scanf("%d", &a[j]);
	}

	for (i = 0; i < 10; i++) {
		if ((a[1] < a[i])&&(a[i]>media)) {
			media = a[i];
		}
	}
	printf("Largest is %d\n", media);
	
	return 0;
}