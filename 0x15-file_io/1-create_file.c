#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: content writen in the file
 * Return: 1 on success & -1 on fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	int ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num = 0; text_content[num]; num++);

	ret = write(fd, text_content, num);

	if (ret == -1)
		return (-1);

	close(fd);

	return (1);
}

