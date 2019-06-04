/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Takes input string and reduces extra blank spaces down to one
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	int c = 0; // for input

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while((c = getchar()) == ' ');
			putchar(' ');

			if (c == EOF) {
				break;
			}
		}
		putchar(c);
	}

	return 0;
}



