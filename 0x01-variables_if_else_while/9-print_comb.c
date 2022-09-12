#include <stdio.h>

/**
 * main - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		
		if (!(ch == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	/* out using puts */
	return (0);
}
