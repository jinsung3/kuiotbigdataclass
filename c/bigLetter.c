#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);
	
	if (ch >= 'A' && ch <= 'Z') {
		printf("%c is a big Letter\n", ch);
	} /* else {
		// x
	} */


	return 0;
}
