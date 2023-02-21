#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints alphabets in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
