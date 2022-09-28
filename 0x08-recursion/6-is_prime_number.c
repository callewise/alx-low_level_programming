#include "main.h"

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: the number to check
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * _is_prime - tests for prime
 * @n: number to test
 * @start: the counter
 * Return: 1 if prime, otherwise 0
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
