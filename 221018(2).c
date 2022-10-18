#include<stdio.h>
int main() {
	int year, mouth, day, i;
	scanf("%d,%d,%d", &year, &mouth, &day);
	for (i = 1; i <= mouth;i++) {
			switch (i)
			{
			case 2:day += 31; break;
			case 3:day += 28; break;
			case 4:day += 31; break;
			case 5:day += 30; break;
			case 6:day += 31; break;
			case 7:day += 30; break;
			case 8:day += 31; break;
			case 9:day += 31; break;
			case 10:day += 30; break;
			case 11:day += 31; break;
			case 12:day += 30; break;
			}
	}
	if ((mouth>=3)&&(year%100==0)&&(year%400==0)) {
		day++;
	}
	else if ((mouth >= 3) && (year % 100 != 0) && (year % 4 == 0)) {
		day++;
	}
	printf("%d", day);
	return 0;
}