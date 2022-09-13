#include<stdio.h>

/**
 * print_alphabet - Entry point
 * print_alphabet - print abcdefghijklmnopqrstuvwxyz
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 */
void print_alphabet(void)
{
	/*  print_alphabet to print abcdefghijklmnopqrstuvwxyz */
	char ch;
	/*  print_alphabet to print abcdefghijklmnopqrstuvwxyz */
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	/*  print_alphabet to print abcdefghijklmnopqrstuvwxyz */
	putchar('\n');
}
