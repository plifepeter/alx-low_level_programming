#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: check for variable value
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
