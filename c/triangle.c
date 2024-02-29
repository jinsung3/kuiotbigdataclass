#include <stdio.h>
	
int main(void)
{	int width, height;
	double area;
	scanf("%d", &width);
	scanf("%d", &height);
	
	area = 1.0 / 2.0 * width * height;

	printf("area: %.1f\n", area);

	return 0;
}
