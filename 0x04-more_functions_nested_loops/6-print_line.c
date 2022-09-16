#include <stdio.h>

/**
 * print_line - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * @n: number of line
 */

void print_line(int n)
{
	/* increment */
	int ch;
	/* increment */
	for (ch = 0 ; ch < n ; ch++)
	{
		putchar('_');
	}
	putchar('\n');
}
