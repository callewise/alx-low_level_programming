#include "main.h"

/**
 * factorial - searchs for factorial of a number
 * @n: the number to find the factorial of
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
