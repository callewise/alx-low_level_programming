#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 1 if there is an error; else 0
 */
int main(int argc, char *argv[])
{
	int num, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (num < 0)
			break;
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
