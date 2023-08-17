#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * Return: success
 */
void jack_bauer(void)
{
	int hrs;

	int mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
