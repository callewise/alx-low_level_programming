#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: number
 * @x: squared number
 * Return: square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
