#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes whole array
 * @array: array to be executed
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
