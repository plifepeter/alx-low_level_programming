#include "main.h"
/**
 * print_diagonal - function that draws diagonal
 * @n: find the variable n
 * Return: should return a value
 */
void print_diagonal(int n)
{
	int i;
	int e;

	for (i = 0; i < n; i++)

	{
		if (n > 1)

			for (e = 0; e < i; e++)

		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');

	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
