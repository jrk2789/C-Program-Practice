/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Another Fehrenheit-Celsius table, using constants
	Last updated: 06/03/2019
*/

#include <stdio.h>

#define LOWER 0   // lower limit for table
#define UPPER 300 // lower limit for table
#define STEP 20   // lower limit for table

int main() {
	int fahr; // fahrenheit value

	// printing the table with a for-loop
	printf("Fahrenheit, Celsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%3d %12.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	return 0;
}


