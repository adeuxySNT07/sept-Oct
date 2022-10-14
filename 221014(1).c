#include<stdio.h>
int main() {

	int age = 0;
	scanf("%d", &age);
	printf("age:%d,", age);
	if (age == 2||age == 3) {
		printf("enter Lower class");
	}
	else if (age == 4) {
		printf("enter Middle class");
	}
	else if (age == 5 ||age == 6) {
		printf("enter Higher class");
	}
	return 0;
}