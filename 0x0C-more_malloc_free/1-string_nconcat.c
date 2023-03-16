#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concanate two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: pointer to concanated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	char *tmp1, *tmp2;
	unsigned int len1, len2, i;

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

	if (n > len2)
		n = len2;
	arr = malloc(sizeof(char) * (len1 + n) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = s1[i];
	for (; i < len + n; i++)
		arr[i] = s2[i - len1];
	return (arr);
}
