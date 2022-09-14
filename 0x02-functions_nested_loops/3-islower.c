#include<stdio.h>
#include <ctype.h>
/**
 * _islower - Entry point
 * _islower - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 * c - is char
 * member c - int char
 * int c - an the char
 */
int _islower(int c)
{
	/* member c - is a char */
	/* parameter int c member c  - is a char */
	if (islower(c))
		return (1);
	else
		return (0);
}
