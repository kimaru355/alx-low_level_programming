#include <stdio.h>

/**
 * main - prints combination of two-two digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(32);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if ((a == 98) && (b == 99))
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
