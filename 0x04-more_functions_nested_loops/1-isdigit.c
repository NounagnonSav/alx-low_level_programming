#include<stdio.h>
#include <ctype.h>
/**
 * _isdigit - Entry point
 * _isdigit - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 *  @c: The character to checks for lowercase character
 */
int _isdigit(int c)
{
	/* member c - is a char */
	/* parameter int c member c  - is a char */
	if (isdigit(c))
		return (1);
	else
		return (0);
}
