#include <stdio.h>
/**
 * main - program that prints the size of a various computer type
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d \n", sizeof(signed char));
	printf("Size of an int: %d \n", sizeof(int));
	printf("Size of a long int: %d \n", sizeof(long int));
	printf("Size of a long long int: %ld \n", sizeof(long long int));
	printf("Size of a float: %d \n", sizeof(float));
	return (0);
}
