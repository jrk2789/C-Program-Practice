/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Pointer Code Example
	06/11/2019

	Example Code taken from:
	Title - "The C Programming Language" second edition
	Author- Brain W. Kernighan & Dennis M. Ritchie
	Date - 22 March 1988
*/

#include <ctype.h>

int getch(void); 
void ungetch(int);

// gets an input and stores through a pointer
int getint(int *pn) {
	int c, sign; 

	// ignore white space
	while (isspace(c = getch()))
		;

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); // not a number
		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-') {
		c = getch();
	}

	for (*pn = 0; isdigit(c); c = getch()) {
		*pn = 10 * *pn + (c - '0');

	*pn *= sign;

	if (c != EOF) {
		ungetch(c);
	}

	return c;
}


