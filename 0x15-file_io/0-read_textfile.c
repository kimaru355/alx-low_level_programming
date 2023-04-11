#include "main.h"

/**
 * read_textfile - reads characters from filename
 * @filename: file to be read
 * @letters: number of characters to read
 * Return: number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	ssize_t n;
	size_t i;
	FILE *fp;

	if (!filename)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	for (i = 0; i < letters; i++)
	{
	c = getc(fp);
	if (c == EOF)
	{
		n = i;
		fclose(fp);
		return (n);
	}
		fseek(fp, i, SEEK_SET);
		printf("%c", c);
	}
	n = i;
	fclose(fp);
	return (n);
}
