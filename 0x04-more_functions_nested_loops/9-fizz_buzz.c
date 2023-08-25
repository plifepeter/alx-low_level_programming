#include <stdio.h>
#include "main.h"

/**
 * main - programme that print from 1 - 100
 * print multiple of five buzz and fizzbuzz
 * Return: value should be successfull
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 15 == 0)

			printf("FizzBuzz");

		if (k % 3 == 0)

			printf("Fizz");

		if (k % 5 == 0)

			printf("Buzz");

		else

			printf("%i", k);

		if (k < 100)

			printf(" ");
	}

	printf("\n");
	return (0);
}
