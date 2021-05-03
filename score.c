#include "score.h"			//user-defined header file

// main function only sketches out the logic of program
void main() {
	int scores[MAX], marks[MAX];
	int statistics[6] = { 0,0,0,0,0,0 };			//holding how many students have got mark 0, 1, ..., 5

	printf("Welcome to score evaluation \n");
	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(scores, marks, statistics);
}
