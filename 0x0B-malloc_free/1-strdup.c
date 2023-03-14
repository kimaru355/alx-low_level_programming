#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to mem
 * @str: string to store
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	char *tmp = str;

	len = 0;
	while (*str++)
		len++;
	arr = malloc(sizeof(char) * len);
	str = tmp;
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
