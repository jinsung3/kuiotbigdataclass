#include <stdio.h>

int main(void)
{
	int sum;
	sum = 0;
	
	int i;
	i = 2;
	while (i <= 100) {
		sum = sum + i;
		i = i + 2;		//++i;
	}

	printf("sum even num [1, 100] : %d\n", sum);

	return 0;
}
