#include<stdio.h>

/**
 * print_alphabet_x10 - Entry point
 * print_alphabet_x10 - print abcdefghijklmnopqrstuvwxyz
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 */
void print_alphabet_x10(void)
{
	/*  print_alphabet to print abcdefghijklmnopqrstuvwxyz */
	char ch;
	/*  print_alphabet to print abcdefghijklmnopqrstuvwxyz */
	int i;
	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
	/* putchar('\n'); */
}
