#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto[7];

	srand(time(NULL));
	for (int i = 0; i < 7; ) {
		lotto[i] = rand() % 45 + 1;		// unique [1, 45]
		
		int j;
		for (j = 0; j < i; ++j) {
			if (lotto[i] == lotto[j]) {
				break;
			}
		}
		if (j == i) {
			++i;
		} else {
			// found
		}
		
	}
	
	for (int i = 0; i < 7; ++i) {
		printf("%d ", lotto[i]);
	}
	printf("\n");

	return 0;
}






















/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[7];
	
	srand(time(NULL));
	
	//question[i] <--- unique! [1, 9] random num.
	question[0] = rand() % 45 + 1;
	
	do{
		question[1] = rand() % 45 + 1;
	} while (question[0] == question[1]);
		
	do {
		question[2] = rand() % 45 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);
	
	do {
		question[3] = rand() % 45 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);

	do {
		question[4] = rand() % 45 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);

	do {
		question[5] = rand() % 45 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);

	do {
		question[6] = rand() % 45 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);

	printf("question : %d %d %d %d %d %d %d\n", question[0], question[1], question[2], question[3], question[4], question[5], question[6]);
	
	return 0; 
}*/
