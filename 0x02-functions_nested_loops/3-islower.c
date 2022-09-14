#include<stdio.h>
#include <ctype.h>
/**
 * _islower - Entry point
 * _islower - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 */
int _islower(int c)
{
	/*  print_alphabet to print abcdefghijklmnopqrstuvwxyz */
	if ( islower(c) )
		return (1);
	else
		return (0);
}
