#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	int isOrdinary;
	isOrdinary = !((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	isOrdinary = year % 4 != 0 || year % 100 == 0 && year % 40 !=0);	

	printf("%d is a leap : %d\n", year, isOrdinary);


	return 0;
}
