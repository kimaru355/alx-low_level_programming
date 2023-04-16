#include "main.h"

/**
 * read_textfile - reads characters from filename
 * @filename: file to be read
 * @letters: number of characters to read
 * Return: number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, i;
	int fp;
	char *c;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	i = read(fp, c, letters);
	n = write(STDOUT_FILENO, c, i);

	close(fp);
	free(c);
	return (n);
}
