#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: checking the str variable pointer for print
 * Return: should return a successful value
 */
void _puts(char *str)
{
	int e;

	for (e = 0; str[e] != '\0'; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
