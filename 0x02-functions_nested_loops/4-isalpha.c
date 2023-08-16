#include "main.h"
/**
 * _isalpha - check if alphabet is lower or uppercase
 * @c: check c character
 * Return: 1 if is lower or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

	{
		return (1);

	}

	return (0);
}
