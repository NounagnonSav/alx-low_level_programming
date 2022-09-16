#include<stdio.h>
#include <ctype.h>
/**
 * _isupper - Entry point
 * _isupper - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 *  @c: The character to checks for lowercase character
 */
int _isupper(int c)
{
	/* member c - is a char */
	/* parameter int c member c  - is a char */
	if (isupper(c))
		return (1);
	else
		return (0);
}
