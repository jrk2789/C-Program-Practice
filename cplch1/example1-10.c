/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Replacing various I/O items such as tabs with \t.
	Last updated: 06/04/2019
*/

#include <stdio.h>

int main() {
	int c = 0; 	// for input

	/* replace tabs with '\t', backslashes with '\\', and backspaces with '\b' */
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
			while ((c = getchar()) == ' ');
		}
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
			while ((c = getchar()) == ' ');
		}
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
			while ((c = getchar()) == ' ');
		}
		putchar(c);
	}

	return 0;
}


