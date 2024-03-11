#include<stdio.h>

typedef struct {
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
} Student;


int main(void)
{	
	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	Student students[10];
	for (int i = 0; i < 10; ++i) {
		fscanf(stdin, "%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
		students[i].sum = students[i].kor + students[i].eng + students[i].mat;
		students[i].average = (double)students[i].sum / 3.0;
		students[i].rank = 1;
	}
	
	//rank ??? 
	
	for (int i = 0; i < 10; ++i) {
		for(int j = 0; j < 10; ++j) {
			if(/* i != j && */ students[i].sum < students[j].sum) {
				++students[i].rank;
			} /* else {
			
			}*/
		}
	}
	
	for (int i = 0; i < 10 - 1; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			if (students[i].sum < students[j].sum) {
				Student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
			} /*else {
			}*/
		}
	}
	
	/*fprintf(fout, "----------------------------------------------\n");
	fprintf(fout, "name                 kor eng mat sum avg rnk\n");
	fprintf(fout, "----------------------------------------------\n");
	for (int i = 0; i < 10; ++i) {
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n",
			students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
	}
	fprintf(fout, "----------------------------------------------\n"); */
	

	Student *table[10];
	for (int i = 0; i < 10; ++i) {
		table[i] = &students[i];
	}
	
	//sorting
	for (int i = 0; i < 10-1; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			if (table[i]->sum < table[j]->sum) {
				Student *tmp = table[i];
				table[i] = table[j];
				table[j] = tmp;
			}
		}
	}
	
	//print.
	fprintf(fout, "----------------------------------------------\n");
	fprintf(fout, "name                 kor eng mat sum   avg  rnk\n");
	fprintf(fout, "----------------------------------------------\n");
	for (int i = 0; i < 10; ++i) {
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n",
			table[i]->name, table[i]->kor, table[i]->eng, table[i]->mat, table[i]->sum, table[i]->average, table[i]->rank);
	}
	fprintf(fout, "----------------------------------------------\n");
	
	fclose(fin);
	fclose(fout);
	return 0;
	
	
} 

/* #include <stdio.h>

typedef struct {
    char name[21];
    int kor;
    int eng;
    int mat;
    int sum;
    double average;
    int rank;
} Student;

int main(void) {
    Student students[10];

    // Input information for each student
    for (int i = 0; i < 10; ++i) {
        scanf("%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
        students[i].sum = students[i].kor + students[i].eng + students[i].mat;
        students[i].average = (double)students[i].sum / 3.0;
        students[i].rank = 1;  // Initialize rank to 1
    }

    // Rank calculation
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            // Compare the total scores and update ranks
            if (students[i].sum < students[j].sum)
                students[i].rank++;
        }
    }

    // Display the table
    fprintf(fout, "----------------------------------------------\n");
    fprintf(fout, "name                 kor eng mat sum avg rnk\n");
    fprintf(fout, "----------------------------------------------\n");
    for (int i = 0; i < 10; ++i) {
        fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n",
               students[i].name, students[i].kor, students[i].eng, students[i].mat,
               students[i].sum, students[i].average, students[i].rank);
    }

    return 0;
} */
