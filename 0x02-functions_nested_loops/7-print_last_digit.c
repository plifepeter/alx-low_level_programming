#include "main.h"
/**
 * print_last_digit - Fucntion that print last digit
 * @e: check variable
 * Return: check the return value
 */
int print_last_digit(int e)
{
	int num;

	num = e % 10;

	if (num < 0)
	{
		num *= -1;
	}
	_putchar(num + '0');

	return (num);
}
