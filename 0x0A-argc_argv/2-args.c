#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it received
 * @argc: arguments counter
 * @argv: array of passed arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (0);
}
