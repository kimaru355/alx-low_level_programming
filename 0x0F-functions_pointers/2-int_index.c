#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array containing elements
 * @size: number of elements
 * @cmp: function pointers
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
