#include <stdio.h>

/**
 * print_most_numbers - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		if (!(ch == '2' || ch == '4'))
			putchar(ch);
	}
	putchar('\n');
}
