#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * more headers goes there
 * main function
 * betty style doc for function main goes there
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
	/* if else if condition is true */
	return (0);
}
