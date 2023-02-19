#include <stdio.h>

/**
 * main - prints combinations of three digits
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b)
				{
					if (b < c)
					{
						putchar((a % 10) + '0');
						putchar((b % 10) + '0');
						putchar((c % 10) + '0');
				if (a == 7)
				{
					if (b == 8)
					{
					if (c == 9)
						continue;
					}
				}
						putchar(44);
						putchar(32);
					}
					else
						continue;
				}
				else
					continue;
			}
		}
	}
	putchar('\n');

	return (0);
}
