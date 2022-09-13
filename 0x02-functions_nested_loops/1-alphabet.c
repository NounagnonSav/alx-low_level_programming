#include<stdio.h>

/**
 * main - check the code
 * print_alphabet to print abcdefghijklmnopqrstuvwxyz
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
