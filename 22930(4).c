#include<stdio.h>
int main() {
	double pi = 3.1415926;
	double p = 11340.0, d = 0, m = 0;
	scanf("%lf", &d);
	double v = pi * d * d * d * (4.0 / 3.0) * (1.0 / 8.0);
	m = p * v * 0.000001;
	printf("%lf", m);
	return 0;
}