#include <stdio.h>

/**
 * print_numbers - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
