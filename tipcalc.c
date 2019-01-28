#include <stdio.h>   // input and output
#include <math.h>    // floor function
#include "tipcalc.h" // function definitions 

void percentCalc(double *amount, double percent) {
	*amount = *amount + (*amount * percent);
}

int main() {
	double total = 0.0;
	double perc = 0.0;

	printf("Enter the check total: $#.##\n");
	scanf("%lf", &total);

	printf("Enter tip %%: 25\n");
	scanf("%lf", &perc);
	perc = perc / 100;

	percentCalc(&total, perc);

	printf("Total amount owed with a %.2lf%% tip:\n", (perc * 100));
	printf("$%.2lf\n\n", total);

	return 0;
}

