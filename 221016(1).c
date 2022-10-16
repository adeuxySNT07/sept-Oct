#include<stdio.h>
int main() {
	int i = 0, n = 0;
	for (i = 10000; i < 100000; i++) {
		if ((i % 10 == 6)&&(i % 3 == 0)) {
			++n;
		}
	}
	printf("%d", n);

	return 0;
}