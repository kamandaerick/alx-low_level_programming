#include "main.h"
/**
 * append_text_to_file - appends txt to a file
 * @filename: the file on which to append the text
 * @text_content: the text to append
 * Return: return -1 on fail else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, fd, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	y = write(fd, text_content, length);
	if (fd == -1 || y == -1)
		return (-1);
	close(fd);
	return (1);
}
