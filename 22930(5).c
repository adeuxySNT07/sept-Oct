#include<stdio.h>
int main() {
	int den = 11340;
	double outDia = 0, inDia = 0, pi = 3.1415926;
	double outV = 0, inV = 0, m = 0, V = 0;
	scanf("%lf%lf", &outDia, &inDia);
	outV = (4.0 / 3.0) * outDia * outDia * outDia * pi * (1.0 / 8.0);
	inV = (4.0 / 3.0) * inDia * inDia * inDia * pi * (1.0 / 8.0);
	V = outV - inV;
	m = den * V * 0.000001;
	printf("%lf", m);
	return 0;
}