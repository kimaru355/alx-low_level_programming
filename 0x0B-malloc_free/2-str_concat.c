#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - join two strings
 * @s1: first string
 * @s2: second string
 * Return: p to joined string
 */

char *str_concat(char *s1, char *s2)
{
	char *tmp1, *tmp2;
	char *arr;
	unsigned int len1, len2, sum;
	unsigned int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	tmp1 = s1;
	tmp2 = s2;

	len1 = 0;
	while (*s1++)
		len1++;
	len2 = 0;
	while (*s2++)
		len2++;
	s1 = tmp1;
	s2 = tmp2;
	sum = len1 + len2;

	arr = malloc(sizeof(char) * sum + 1);
	if (arr == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
	{
		arr[k] = s1[k];
	}
	for (; k < sum; k++)
	{
		for (j = 0; j < len2; j++)
		{
			arr[k] = s2[j];
		}
	}
	arr[k] = '\0';
	return (arr);
}
