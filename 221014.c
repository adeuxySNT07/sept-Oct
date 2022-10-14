#include<stdio.h>
int main(void) {

	double t, w, h;

	scanf("%lf%lf", &w, &h);
	t = w / h / h;		/*浮点数损失了小数位*/
	printf("%f\n", t);
	if (t < 18) {
		printf("lower weight");
	}
	else if (18 < t && t < 25) {
		printf("normal weight");
	}
	else if (25 < t && t < 27) {
		printf("higher weight");
	}
	else if (t >= 27) {
		printf("obesity");
	}
	return 0;
}