#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * print_last_digit - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 *  @c: The character to apply abs function
 */
int print_last_digit(int c)
{
	c = abs(c);
	while (c > 10)
		c = c % 10;
	_putchar('0' + c);
	return (c);
}