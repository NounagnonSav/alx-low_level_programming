#include <stdio.h>

/**
 * main - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (!(ch == 'e' || ch == 'q'))
			putchar(ch);
	}
	putchar('\n');
	/* out using puts */
	return (0);
}
