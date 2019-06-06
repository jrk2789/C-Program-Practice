/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Addition to example1-17. function to remove trailing blanks and tabs
	Last updated: 06/06/2019
*/

#include <stdio.h>
#define MINLENGTH 80   // minimum length restriction
#define MAXIMUM 1000   // maximum string length

int getline_my(char line[], int length);
int cleartail(char line[]);

// main is for testing
int main() {
	int len;		   	// length of string
	char line[MAXIMUM]; // input line

	while ((len = getline_my(line, MAXIMUM)) > 0) {
		if (cleartail(line) > 0) {
			printf("Line meets requirements: %s\n", line);
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

// deleting trailing blanks and tabs off lines of input
int cleartail(char line[]) {
	int i; // for indexing

	// removes trailing blanks and tabs from line
	for (i = 0; ((line[i] == ' ') || (line[i] == '\t')); i--)
	;

	// handle blank lines
	if (i >= 0 ) {
		i++;
		line[i] = '\n';

		i++;
		line[i] = '\0';
	}

	return i;
}
