/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	New line, Tabs, and Blank spaces Counter
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	int c, nl, tb, bl; // input line count

	nl = 0;
	tb = 0;
	bl = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			nl++;
		}
		else if (c == '\t') {
			tb++;
		}
		else if (c == ' ') {
			bl++;
		}
	}
	printf("There were: %2d new lines\n", nl);	
	printf("There were: %2d tabs\n", tb);
	printf("There were: %2d blank spaces\n", bl);

	return 0;
}



