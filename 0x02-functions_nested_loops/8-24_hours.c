#include<stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - Entry point
 * jack_bauer - that print chrono
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Void
 */
void jack_bauer(void)
{
	/* hourse */
	int i;
	/* munite */
	int j;
	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			if (i < 10)
				printf("0");
			printf("%d", i);
			printf(":");
			if (j < 10)
				printf("0");
			printf("%d", j);
			printf("\n");
		}
	}
}
