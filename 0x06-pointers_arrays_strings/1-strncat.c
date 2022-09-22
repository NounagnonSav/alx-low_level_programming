#include<stdio.h>
#include <string.h>

/**
 * _strncat - Entry point
 * _strncat - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: char concat
 * @src: The character to checks for lowercase character
 * @dest: The character to checks for lowercase character
 * @n: The character to checks for lowercase character
 */

char *_strncat(char *dest, char *src, int n)
{
	return strncat( dest, src, n);
}
