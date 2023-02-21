#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
