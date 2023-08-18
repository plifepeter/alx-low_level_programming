#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing out numbers from n to 98
 * @n: checking the variable
 * Return: should return a value
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	printf("98 \n");
}
