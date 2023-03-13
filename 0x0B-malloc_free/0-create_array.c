#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates arr of chars
 * @size: size of array
 * @c: char to form array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	else
	{
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
	}
}
