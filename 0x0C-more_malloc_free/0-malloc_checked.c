#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size to be allocated
 * Return: pointer to alloated memory
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit (98);
	return (arr);
}
