#include <stdio.h>
/**
 * main - program that prints the size of a various computer type
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(signed char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s) ", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
