#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file created
 * @text_content: the content of the file created
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, y, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length])
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(fd, text_content, length);
	if (fd == -1 || y == -1)
		return (-1);
	close(fd);
	return (1);
}
