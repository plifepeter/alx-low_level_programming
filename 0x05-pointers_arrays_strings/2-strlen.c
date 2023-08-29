#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: evaluate the s variable string
 * Return: should return success
 */

int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}

	return (e);
}
