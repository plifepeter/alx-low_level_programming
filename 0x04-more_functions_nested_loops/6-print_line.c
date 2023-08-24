#include "main.h"
/**
 * print_line - function that draws line
 * @n: find the variable of n
 * Return: should return a value
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
