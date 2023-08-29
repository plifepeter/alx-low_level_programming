#include "main.h"

/**
 * swap_int - function that swaps values of two interger a and b
 * @a: looking for the pointer value of a
 * @b: looing for the pointer value of b
 * Return: should return a value
 */
void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
