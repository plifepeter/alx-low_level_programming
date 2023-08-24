#include "main.h"
/**
 * print_line - function that draws line
 * @n: find the variable n
 * Return: should return a value
 */
void print_diagonal(int n)
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
			_putchar('\\');
		}
		_putchar('\n');
	}
}
