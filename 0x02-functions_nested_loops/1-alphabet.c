#include "main.h"
/**
 * print_alphabet - C programme that print Alphabet
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}

	_putchar('\n');
}
