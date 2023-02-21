#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char ch;

	for(ch = 'a'; ch <='z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
