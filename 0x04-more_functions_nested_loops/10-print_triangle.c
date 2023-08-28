#include "main.h"
/**
 * print_triangle - a function that print a triangle
 * @size: looking for the value of size
 * Return: the result should be successful
 */
void print_triangle(int size)
{
	int e = 0;
	int z = 0;
	int log;

	if (size > 0)
	{
		while (z < size)
		{
			log = size - z - 1;
			while (e < size)
			{
				if (log > e)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				e++;
			}
			z++;
			e = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
