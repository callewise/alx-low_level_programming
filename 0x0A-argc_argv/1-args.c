#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: size of argv
 * @argv: pointers to array of characters
 *
 * Return: number of arguments
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
