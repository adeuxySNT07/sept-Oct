#include<stdio.h>
int main() {
	int h = 0, r = 0;
	float Pi = 3.14159, V, vMin = 1.5 * 1000;
	scanf("%d%d", &h, &r);
	V = Pi * r * r * h;
	int n = (vMin - 1) / V + 1;
	printf("%d", n);
	return 0;
}