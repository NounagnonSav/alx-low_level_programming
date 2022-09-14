#include<stdio.h>
/**
 * print_to_98 - Entry point
 * print_to_98 - that checks for lowercase character
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 *  @n: The number
 */
void print_to_98(int n)
{
	int i;
	/* increment */
	if (n < 98)
		for (i = n ; i < 99 ; i++)
		{
			if (i < 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	else if (n > 98)
		for (i = n ; i > 97 ; i--)
                {
                        if (i > 98)
                                printf("%d, ", i);
                        else
                                printf("%d", i);
                }
	else
		printf("%d", n);
	printf("\n");
}

