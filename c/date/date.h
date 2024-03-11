#ifndef DATE_H
#define DATE_H

struct date {
	int year;
	int month;
	int day;
};

typedef struct date Date;

void printDate1(struct date d);
void printDate2(const struct date *pd);

#endif


/*unsigned int length;

typedef unsigned int size_t;
size_t length;
*/
