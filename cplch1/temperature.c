/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Fahrenheit Celsius Formula
	Last updated: 06/03/2019
*/

#include <stdio.h>

int main() {
	float fahr, celsius;     // Fahrenheit and Celsius values
	int lower, upper, step;  // temperature limits for the table

	// setup parameters for the table
	lower = 0;
	upper = 300;
	step = 20;

	// set start point
	fahr = lower;

	// prints both fahrenheit and celcius values given the current step
	printf("Fahrenheit, Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f \t %9.1f \n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

