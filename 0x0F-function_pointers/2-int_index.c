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
		int i, ans;

		for (i = 0; i < size; i++)
		{
			ans = (cmp(array[i]));
			if (ans != 0)
				return (i);
		}
	}
	return (-1);
}
