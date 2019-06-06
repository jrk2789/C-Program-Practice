/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	printing the longest input line
	06/05/2019

	Example Code taken from:
	Title - "The C Programming Language" second edition
	Author- Brain W. Kernighan & Dennis M. Ritchie
	Date - 22 March 1988
*/

#include <stdio.h>
#define MAXLINE 1000 // maximum input size

int getline_my(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;  			   // current line length
	int max; 	           // maximum length thus far
	char line[MAXLINE];    // current input line
	char longest[MAXLINE]; // longest line saved

	max = len = 0;

	// compare input lines
	while ((len = getline_my(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	// if only one line is present
	if (max > 0) {
		printf("Longest line is: %d\n", (max - 1));
		printf("The Line is: %s\n", longest);
	}

	return 0;
}

// read a line into s, return length
int getline_my(char s[], int lim) {
	int c, i; // c for EOF, i for length

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

		if (c == '\n') {
			s[i] = c;
			++i;
		}


	s[i] = '\0';

	return i;
}

// copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]) {
	int i; // index for arrays

	i = 0;

	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
