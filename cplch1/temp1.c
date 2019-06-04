/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Another Fehrenheit-Celsius table
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	int fahr; // fahrenheit value

	// printing the table with a for-loop
	printf("Fahrenheit, Celsius\n");
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3d %9.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	return 0;
}


