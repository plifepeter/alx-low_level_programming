#include "main.h"
/**
 * print_sign - a function that pring sign of a number
 * @n: Check for n
 * Return: 1 if is greater 0 if is zero -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
