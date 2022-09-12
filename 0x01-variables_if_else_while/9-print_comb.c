#include <stdio.h>

/**
 * main - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar((n % 10) + '0');
		if (!(n == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	/* out using puts */
	return (0);
}
