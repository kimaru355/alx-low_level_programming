#include <stdio.h>

/**
 * main - prints number combinations in ascending order
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			putchar((i % 10) + '0');
			putchar((a % 10) + '0');
			putchar(44);
		}
	}
	putchar('\n');
}
