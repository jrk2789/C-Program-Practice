/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Simple lines, words, and character counter
	Last updated: 06/04/2019
*/

#include <stdio.h>

#define IN 1   // insie a word
#define OUT 0  // outside a word

int main() {
	int c, nl, nw, nc, state; // various values to count with

	state = OUT;
	nl = nw = nc = 0; 	      // sets all variables to 0!
	while (( c = getchar()) != EOF) {
		nc++;
		if (c == '\n') {
			nl++;
		}

		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			nw++;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);

	return 0;
}




