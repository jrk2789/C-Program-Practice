/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Practice with getchar and putchar functions
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	int c; // stores numeric value of input

	c = getchar();      // get the next input from keyboard
	while (c != EOF) {  // EOF means end of file
		putchar(c);
		c = getchar();
	}

	return 0;
}



