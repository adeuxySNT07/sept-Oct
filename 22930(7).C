#include<stdio.h>
int main() {
	int inNum = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
	scanf("%d", &inNum);
	a = inNum % 10;
	b = inNum / 10 % 10;
	c = inNum / 100 % 10;
	d = inNum / 1000 % 10;
	e = inNum / 10000 % 10;
	printf("%d\n%d\n%d\n%d\n%d", a,b,c,d,e);
	return 0;
}