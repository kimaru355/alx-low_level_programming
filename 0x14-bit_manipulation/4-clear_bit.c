#include "main.h"

/**
 * clear_bit - changes the value of a bit to 0
 * @n: pointer to unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}

