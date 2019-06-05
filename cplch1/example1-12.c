/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Printing input one word per line
	Last updated: 06/04/2019
*/

#include <stdio.h>

int main() {
	int c = 0; // for reading input

	// output one word per line, start a new line for each word
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ');
			putchar('\n');
		}
		putchar(c);
	}

	return 0;
}



