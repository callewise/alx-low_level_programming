#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: NULL in case of error, pointer to allocated space
 */
char *_strdup(char *str)
{
	char *y;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;
	y = malloc(sizeof(char) * (l + 1));

	if (y == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		y[i] = str[i];
	}

	y[l] = '\0';

	return (y);

}
