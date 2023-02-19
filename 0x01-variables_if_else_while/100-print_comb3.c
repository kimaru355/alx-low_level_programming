#include <stdio.h>

/**
 * main - prints two digit combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (a > i)
			{

				putchar((i % 10) + '0');
				putchar((a % 10) + '0');
				if (!((i == 8) && (a == 9)))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
