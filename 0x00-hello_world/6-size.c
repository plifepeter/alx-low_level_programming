#include <stdio.h>
/**
 * main - program that prints the size of a various computer type
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s) \n", sizeof(char));
	printf("Size of an int: %d byte(s) \n", sizeof(int));
	printf("Size of a long int: %d byte(s) \n", sizeof(long));
	printf("Size of a long long int: %ld byte(s) \n", sizeof(long long));
	printf("Size of a float: %d byte(s) \n", sizeof(float));
	return (0);
}
