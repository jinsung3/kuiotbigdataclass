#include <stdio.h>

int main(void) 
{
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <=5; ++j) {
/*			if (i == j || i + j == 6) {
				printf("*");
			} else {
				printf(" ");
			}
*/
			printf( (i == j || i + j == 6) ? "*" : " ");
		}
		printf("\n");
	}

	return 0;
}










/*int main(void) {
   int size = 5; 

	// i: 1 ~ 5
   for (int i = 1; i <= size; i++) {
   		// j: 1 ~ 5
       for (int j = 1; j <= size; j++) {
           if (i == j || i + j == size + 1) {
               printf("*");
           } else {
               printf(" ");
           }
       }
      printf("\n");
   }

   return 0;
}*/

// 1. i == j => x
// 2. i + j == 6 => x

/*
1) xooox => i:1, j: 1 ~ 5 => j: 1, (j: 5) => 1, 5 => i + j == 6

2) oxoxo => i:2, j: 1 ~ 5 => j: 2, (j: 4) => 2, 4

3) ooxoo => i:3, j: 1 ~ 5 => j: 3, (j: 3) => 3, 3

4) oxoxo => i:4, j: 1 ~ 5 => (j: 2), j: 4 => 4, 2

5) xooox => i:5, j: 1 ~ 5 => (j: 1), j: 5 => 5, 1
*/
