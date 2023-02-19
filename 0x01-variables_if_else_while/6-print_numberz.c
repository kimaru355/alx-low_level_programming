#include <stdio.h>

/**
 * main - prints numbers 0-9 folowed by a new line
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');

	return (0);
}
