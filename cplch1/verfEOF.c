/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Checking if EOF is really 0 or 1
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	int c;           		 // value for input
	char value1;
	char value2;
	char value3; 			// keeping track of EOF

	value1 = ((c = getchar()) != EOF);
	value2 = value1 != 0;
	value3 = value2 != 1;

	while (value3) {
		putchar(c);
		value1 = ((c = getchar()) != EOF);
		value2 = value1 != 0;
		value3 = value2 != 1;
	}

	return 0;
}



