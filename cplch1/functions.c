/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Function example: Raise a a value of m to a power of n
	06/05/2019

	Example Code taken from:
	Title - "The C Programming Language" second edition
	Author- Brain W. Kernighan & Dennis M. Ritchie
	Date - 22 March 1988
*/

#include <stdio.h>


/* rasing base to the n-th power. */
int power(int base, int n) {
	int r = 1; // return value

	// computer parameter values
	for (int i = 1; i <= n; i++) {
		r *= base;
	}

	return r;
}

int main() {
	int i; // loop control

	// compute variations of 2 and -3 raised to the i-th power using the power function
	for (i = 0; i < 10; i++) {
		printf("%d %d %d\n", i, power(2,i), power(-3, i));
	}

	return 0;
}


