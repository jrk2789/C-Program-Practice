/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Count characters in input; 1st version
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	long nc = 0; // character count

	while (getchar() != EOF) {
		++nc;
		printf("%ld\n", nc);
	}


	return 0;
}



