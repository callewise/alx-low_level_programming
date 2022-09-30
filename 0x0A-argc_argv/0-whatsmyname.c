#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments passed
 * @argv: pointer to an array of pointers.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (0);
}
