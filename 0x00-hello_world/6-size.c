#include<stdio.h>

/**
 * main - Entry point
 * Return C program that prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
    	float floatType;
    	long int longIntType;
	long long int longLongIntType;
    	char charType;
   	// sizeof evaluates the size of a variable
    	printf("Size of char: %zu byte(s)\n", sizeof(charType));
    	printf("Size of int: %zu byte(s)\n", sizeof(intType));
    	printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
    	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
