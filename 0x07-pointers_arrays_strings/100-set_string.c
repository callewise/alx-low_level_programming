#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer value
 * @to: value pointed to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
