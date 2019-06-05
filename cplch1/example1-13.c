/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Printing a histogram based on word input length horizontally
	Last updated: 06/05/2019
*/

#include <stdio.h>

int main() {
	int c, i; // for input
	c = i = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			putchar('\n');
		}
		else {
			putchar('*');
		}
	}

	return 0;
}


