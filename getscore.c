#include "score.h"

//function definition for input_scores()

void input_scores(int scores[]) {
	int i, input = 0;
	// using a sentinel-controlled loop to get input
	printf("Enter scores, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++) {
		printf("score %d: ", i+1);
		scanf("%d", &input);
		scores[i] = input;
	}
}