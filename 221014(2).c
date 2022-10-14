#include<stdio.h>
int main() {
	int age;
	scanf("%d", &age);
	switch (age) {
	case 6:printf("age:6,enter Higher class");
		break;
	case 5:printf("age:5,enter Higher class");
		break;
	case 4:printf("age:4,enter Middle class");
		break;
	case 3:printf("age:3,enter Lower class");
		break;
	case 2:printf("age:2,enter Lower class");
		break;
	}
	return 0;
}