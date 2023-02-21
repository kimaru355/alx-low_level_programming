#include "main.h"

/**
 * jack_bauer - prints 24hours min by min
 *
 */

void jack_bauer(void)
{
	int a;

	for (a = 0; a < 24; a++)
	{
		int b = 0;

		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(58);
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			b++;
			_putchar('\n');
		}
	}
}
