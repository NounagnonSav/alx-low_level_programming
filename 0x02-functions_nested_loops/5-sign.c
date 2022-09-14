#include<stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 * print_sign - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 *  @n: The number to compare than zero
 */
int print_sign(int n)
{
	/* member c - is a char */
	/* parameter int c member c  - is a char */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
