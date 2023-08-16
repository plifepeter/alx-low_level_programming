#include "main.h"
/**
 * print_alphabet_x10 - C programme that print alphabet 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int k = 0;
	char b;

	for (k = 0; k <= 9; k++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
