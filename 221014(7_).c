#include<stdio.h>
#include<math.h>

int main() {
	float a = 0, b = 0, c = 0, delta = 1e-4;
	int d = 0, e = 0, f = 0, g = 0;
	scanf("%f,%f,%f", &a, &b, &c);
	d = ((a + b) > c) && (a > 0) && (b > 0) && (c > 0);
	e = (fabs(a - b) < delta);
	f = ((a * a + b * b - c * c) < delta);
	g = !(e || f);
	if (d == 0) {
		printf("����");
	}
	else if (d == 1) {
		if (e) {
			printf("����");
		}
		if (f) {
			printf("ֱ��");
		}
	}
	if (g) {
		printf("һ��");
	}
	printf("������");
	return 0;
}