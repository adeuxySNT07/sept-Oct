#include<stdio.h>
int main() {

	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	if (x > y) {
		x = x + y;
		y = x - y;
		x = x - y;
	}
	if (x > z) {
		x = x + z;
		z = x - z;
		x = x - z;
	}
	if (y > z) {
		y = y + z;
		z = y - z;
		y = y - z;
	}
	printf("small to big: %d %d %d", x, y, z);
	return 0;
}