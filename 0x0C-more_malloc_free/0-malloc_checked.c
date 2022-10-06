#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: memory size block to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);

	return (block);
}
