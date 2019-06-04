/*  Jedidiah Keplinger (jrk2789)
	James Madison University / Blue Ridge Community College

	Celsius to Fahrenheit Table
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
	celsius = lower;

	// prints both fahrenheit and celcius values given the current step
	printf("Celsius, Fahrenheit\n");
	while (celsius <= upper) {
		fahr = ((5.0 / 9.0) * celsius) + 32;
		printf("%3.0f \t %9.1f \n", celsius, fahr);
		celsius += step;
	}

	return 0;
}

