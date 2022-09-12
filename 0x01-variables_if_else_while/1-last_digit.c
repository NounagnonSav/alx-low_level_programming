#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Return if the last digit of n is greater than 5:
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >= 0)
	{
		r = n % 10;
		while (r > 10)
		{
			r = r % 10;
		}

		if (r > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, r);
		else if (r == 0)
			printf("Last digit of %d is %d and is 0\n", n, r);
		else if (r < 6)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	else
	{
		r = (-1 * n) % 10;
		while (r > 10)
		{
			r = r % 10;
		}
		r = -1 * r;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}

	return (0);
}
