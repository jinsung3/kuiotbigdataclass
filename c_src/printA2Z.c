#include <stdio.h>

int main(void)
/*{
	int i;
	
	i = 'A';
	while (i <= 'Z') {
		printf("%c", i);
		++i;
	}
	printf("\n");
	
	//printf("ABCDEFG...XYZ\n");
	return 0;
}*/


{
	char c;
	
	c = (char)'A';
	while ( (int)c <= 'Z') {
		printf("%c", (int)c);
		++c;
	}
	printf("\n");
	
	//printf("ABCDEFG...XYZ\n");
	return 0;
}
