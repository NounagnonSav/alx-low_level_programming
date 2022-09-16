#include <stdio.h>

/**
 * print_line - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 * @n: number of line
 */

void print_line(int n)
{
	int ch;
	for (ch = 0 ; ch < n ; ch++)
	{
		putchar('_');
	}
	putchar('\n');
}
