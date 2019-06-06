/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Take a line of input, and reverse it.
	Last updated: 06/06/2019
*/

#include <stdio.h>

#define MAXIMUM 1000 // the max length a string can be

int getline_my(char line[], int length);
void reverse_my(char from[], char to[], int length);

int main() {
	int len; 			 // string length
	char line[MAXIMUM];  // starting input line
	char rline[MAXIMUM]; // input line reversed

	len = getline_my(line, MAXIMUM);
	reverse_my(line, rline, len);

	printf("Starting string: %s\n", line);
	printf("Reversed string: %s\n", rline);

	return 0;
}

// reads line in from input
int getline_my(char line[], int length) {
	int c, i; // c for input, i for returning length

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

// reverses a string
void reverse_my(char from[], char to[], int length) {
	int i, j;   // for indexing

	i = length - 1;

	// reverse strings
	for (j = 0; j <= length; j++) {
		to[j] = from[i];
		i--;
	}

	to[j + 1] = '\n';
	to[j + 2] = '\0';
}

