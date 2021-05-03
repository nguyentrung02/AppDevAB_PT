#include "score.h"

// this function will display all valid  marks as first part, and
// statistics of marks as second part

void output_results(int s[], int m[], int st[]) {
	int i;
	printf("Here are the mark\n");
        for (i = 0; i < MAX && m[i] != -1; i++)
                printf("%3d ", s[i]);
	puts("");
	for (i = 0; i < MAX && m[i] != -1; i++) 
		printf("%3d ", m[i]);
	puts(""); // Make a new line
	printf("Here are the statistics:\n");
	for (i = 0; i < 6; i++) {
		printf("Mark %d: %d hits\n", i, st[i]);
	}
}
