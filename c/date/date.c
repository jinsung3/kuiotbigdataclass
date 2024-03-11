#include <stdio.h>
#include "date.h"

void printDate1(struct date d)
{
	printf("(%d/%d/%d)\n", d.year, d.month, d.day);
}

void printDate2(const struct date *pd)
{
//	printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d.%d.%d)\n", pd->year, pd->month, pd->day);
}
