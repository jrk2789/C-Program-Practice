/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Line Counter
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	int c, nl; // input line count

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			nl++;
		}
	}
	printf("%d\n", nl);	

	return 0;
}



