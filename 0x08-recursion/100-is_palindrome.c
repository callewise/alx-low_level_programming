#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to check
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - finds the length of a string
 * @s: the string
 * Return: the length of s
 */
int find_strlen(char *s)
{
	if (*s != '\0')
		return (1 + find_strlen(s + 1));
	else
		return (0);
}

/**
 * check_palindrome - Checks if string is a palindrome
 * @s: The string to be checked
 * @index: The index
 * @len: The length of s
 * Return: 1 if palindrome,  else 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
