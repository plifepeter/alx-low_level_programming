#include "main.h"
/**
 * _isdigit - function that checks for digit 0-9
 * @c: check for the value of c
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
