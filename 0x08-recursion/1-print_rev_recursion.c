#include "main.h"

/**
 * _puts_recursion - prints in reverse
 * @s: parameter string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
