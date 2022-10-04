#include<stdio.h>
int main() {
	float a = 0, c = 0, d = 0;
	int a2 = 0, a3 = 0,b=0;
	scanf("%f", &a);
	b = (a + 0.5);
	a2 = 10 * a + 0.5;
	c = 0.1 * a2;
	a3 = 100 * a + 0.5;
	d = 0.01 * a3;
	printf("%d\n%g\n%g", b, c, d);
	return 0;
}
