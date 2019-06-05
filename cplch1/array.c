/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Array example. Counting digits, white space, and others.
	06/05/2019

	Example Code taken from:
	Title - "The C Programming Language" second edition
	Author- Brain W. Kernighan & Dennis M. Ritchie
	Date - 22 March 1988
*/

#include <stdio.h>

int main() {
	int c, i, nwhite, nother; // counting number of various occurrences
	int ndigit[10]; 		  // example input

	// init variables
	nwhite = nother = 0;
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}

	// count variations stored in ndigit
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			nwhite++;
		}
		else {
			nother++;
		}
	}

	// print results
	printf("digits =");
	for (i = 0; i < 10; i++) {
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);


	return 0;
}



