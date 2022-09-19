#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: the number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	printf("\n");
}
