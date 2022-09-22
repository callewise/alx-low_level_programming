#include "main.h"

/**
 * print_number - print integers
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, k, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	k = m;
	count = 1;

	while (k > 9)
	{
		k /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
