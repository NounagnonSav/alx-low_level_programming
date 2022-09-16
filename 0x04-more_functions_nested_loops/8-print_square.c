#include <stdio.h>

/**
 * print_square - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * @size: size of square
 */

void print_square(int size)
{
	/* increment */
	int ch;
	/* increment */
	int i;
	/* increment */
	for (ch = 0 ; ch < size ; ch++)
	{
		for (i = 0 ; i < size ; i++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
