#include <stdio.h>

/**
 * print_diagonal - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * @n: number of line
 */

void print_diagonal(int n)
{
	/* increment */
	int ch;
	/* increment */
	int i;
	/* increment */
	for (ch = 0 ; ch < n ; ch++)
	{
		i = ch;
		while (i > 0)
		{
			putchar(' ');
			i--;
		}
		putchar('\\');
		putchar('\n');
	}
	if (n <= 0)
		putchar('\n');
}
