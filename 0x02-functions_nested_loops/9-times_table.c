#include<stdio.h>
/**
 * times_table - Entry point
 * times_table - that print chrono
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 */
void times_table(void)
{
	/* hourse */
	int i;
	/* munite */
	int j;
	/* munite */
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j == 0)
				printf("%d", i*j);
			else
				if (i * j > 9)
					printf(", %d", i*j);
				else
					printf(",  %d", i*j);
		}
		printf("\n");
	}
}
