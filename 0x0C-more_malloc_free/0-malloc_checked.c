#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the memory space to allocate in bytes
 * @b: size of the memory space to allocate in bytes
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
