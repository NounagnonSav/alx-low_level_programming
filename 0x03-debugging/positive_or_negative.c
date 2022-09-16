#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * positive_or_negative - Entry point
 * Return is positive if the number is greater than 0
 * Return is zero if the number is 0
 * Return is negative if the number is less than 0
 * @n: input value
 */

void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		/* if condition is true then print the following */
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		/* if else if condition is true */
		printf("%d is zero\n", n);
	}
	else
	{
		/* if else if condition is true */
		printf("%d is negative\n", n);
	}
}
