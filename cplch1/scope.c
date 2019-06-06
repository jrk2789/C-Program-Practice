/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	External Variables and Scope
	Built from chararray.c
	06/06/2019

	Example Code taken from:
	Title - "The C Programming Language" second edition
	Author- Brain W. Kernighan & Dennis M. Ritchie
	Date - 22 March 1988
*/

#include <stdio.h>

#define MAXLINE 1000 	// maximum input size

// declare global variable
int max;				// maximum length seen so far
char line[MAXLINE];		// current  input length
char longest[MAXLINE];  // longest line saved here

int getline_my(void);
void copy_my(void);

int main() {
	int len;				// array length
	extern int max; 		// access global variable
	extern char longest[];  // access global char array

	max = 0;
	while ((len = getline_my()) > 0) {
		if (len > max) {
			max = len;
			copy_my();
		}
	}

	if (max > 0) {
		printf("%s", longest);
	}

	return 0;
}

// new version of getline_my
int getline_my(void) {
	int c, i; 			// input and index
	extern char line[]; // access global char array

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF
		 && c != '\n'; i++) {
		line[i] = c;

		if (c == '\n') {
			line[i] = c;
			i++;
		}
	}

	line[i] = '\0';

	return i;
}

// new version of copy_my
void copy_my(void) {
	int i; 						   // index
	extern char line[], longest[]; // access global char arrays

	i = 0;
	while ((longest[i] = line[i]) != '\0') {
		i++;
	}
}
