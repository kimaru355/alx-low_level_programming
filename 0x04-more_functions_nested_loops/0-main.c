#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description: checks for uppercase alphabets
 * Return: 1 if uppercase 0 otherwise
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

