#include <stdio.h>

/**
 * more_numbers - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int ch;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 0 ; ch <= 14 ; ch++)
		{
			if (ch > 9)
			{
				putchar((ch / 10) + '0');
				putchar((ch % 10) + '0');
			}
			else
			{
				putchar(ch + '0');
			}
		}
		putchar('\n');
	}
}
