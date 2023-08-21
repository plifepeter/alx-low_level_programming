#include "main.h"
/**
 * times_table - programme that print times table starting 0
 * Return: result should be success
 */
void times_table(void)
{
	int i, e, cod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (e = 1; e <= 9; e++)
		{
			_putchar(',');
			_putchar(' ');

			cod = i * e;

			if (cod <= 9)
				_putchar(' ');
			else
				_putchar((cod / 10) + '0');

			_putchar((cod % 10) + '0');
		}
		_putchar('\n');
	}
}
