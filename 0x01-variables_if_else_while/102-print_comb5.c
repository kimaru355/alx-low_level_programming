#include <stdio.h>

/**
 * main - prints combination of two-two digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if ((a + b) <= (c + d))
					{
					if ((a != c) && (b != d))
					{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(32);
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					if (!((a == 9) && (b == 8)))
					{
					putchar(44);
					putchar(32);
					}
					}
					}
					else
						continue;
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
