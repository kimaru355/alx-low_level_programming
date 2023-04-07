#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int decimal = 0, i = 0, j;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((b[j] != '1') && (b[j] != '0'))
		{
			return (0);
		}
		decimal = decimal * 2 + (b[j] - '0');
	}
	uint = decimal;
	return (uint);
}
