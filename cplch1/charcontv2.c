/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Count characters in input; 2nd version
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	double nc; // character count

	for (nc = 0; getchar() != EOF; nc++)
		; // null statement, satisfying the body of the loop

	printf("%.0f\n", nc);

	return 0;
}



