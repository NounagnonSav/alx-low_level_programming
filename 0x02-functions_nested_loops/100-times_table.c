#include<stdio.h>
/**
 * print_times_table - Entry point
 * print_times_table - that print chrono
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 * @n: input
 */
void print_times_table(int n)
{
	/* hourse */
	int i;
	/* munite */
	int j;
	/* munite */
	if (n > 0 && n < 15)
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				if (j == 0)
					printf("%d", i * j);
				else
					if (i * j > 9 && i * j < 100)
						printf(",  %d", i * j);
					else if (i * j > 99)
						printf(", %d", i * j);
					else
						printf(",   %d", i * j);
			}
			printf("\n");
		}
}
