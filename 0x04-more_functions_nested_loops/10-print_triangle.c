#include <stdio.h>

/**
 * print_triangle - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * @size: size of triangle
 */

void print_triangle(int size)
{
	/* increment */
	int ch;
	/* increment */
	int i;
	/* increment */
	for (ch = 1 ; ch <= size ; ch++)
	{
		for (i = size ; i > 0 ; i--)
		{
			if (ch >= i)
				putchar('#');
			else
				putchar(' ');
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
