#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append text
 * @text_content: text to append
 * Return: 1 if file exists & -1 if fails does not exist or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	int ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;

		ret = write(fd, text_content, num);

		if (ret == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
