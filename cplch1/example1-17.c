/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Printing input lines that are longer than 80 characters
	Last updated: 06/06/2019
*/

#include <stdio.h>
#define MINLENGTH 80   // minimum length restriction
#define MAXIMUM 1000   // maximum string length

int getline_my(char line[], int length);

// main is for testing
int main() {
	int len;		   	// length of string
	char line[MAXIMUM]; // input line

	while ((len = getline_my(line, MAXIMUM)) > 0) {
		if (len > MINLENGTH) {
			printf("Line meets requirements: %s\n", line);
		}
		else {
			printf("Error: Line not greater than 80\n");
		}
	}

	return 0;
}

// read a line into *line, and return length
int getline_my(char line[], int length) {
	int c, i; 	// c detect EOF, i for return

	for (i = 0; i < length - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		line[i] = c;

		if (c == '\n') {
			line[i] = c;
			i++;
		}
	}
	line[i] = '\0';

	return i;
}
