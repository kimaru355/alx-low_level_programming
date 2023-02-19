#include <stdio.h>

/**
 * main - prints number combinations in ascending order
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{	
		putchar((i % 10) + '0');
		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
