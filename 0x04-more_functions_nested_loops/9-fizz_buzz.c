#include <stdio.h>

/**
 * main - Entry point
 * Return program that prints the alphabet in lowercase, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int r3;
	int r5;


	for (i = 1 ; i <= 100 ; i++)
	{
		r3 = i % 3;
		r5 = i % 5;
		if (r3 == 0 && r5 == 0)
			printf("FizzBuzz");
		else if (r3 == 0)
			printf("Fizz");
		else if (r5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
