#include "main.h"

/**
 * print_binary - prints binary
 * @n: integer to print in binary form
 */


void print_binary(unsigned long int n)
{
	int mask, bit, i, decimal;

	decimal = n;
	mask = 1 << 31;
	for (i = 31; i >= 0; i--)
	{
		if (decimal & (1 << i))
		{
			mask = 1 << i;
			break;
		}
	}
	for (i = mask; i > 0; i >>= 1)
	{
		bit = (decimal & i) ? 1 : 0;
		printf("%d", bit);
	}
	if (i < 0)
		printf("%d", bit);
}
