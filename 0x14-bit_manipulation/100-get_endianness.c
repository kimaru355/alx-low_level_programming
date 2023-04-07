#include "main.h"

/**
 * get_endianness - check whether system is little or big endian
 * Return: 0 for big or 1 for little
 */

int get_endianness(void)
{
	int num;
	char *ptr;

	num = 1;
	ptr = (char*)&num;
	return ((int)*ptr);
}
