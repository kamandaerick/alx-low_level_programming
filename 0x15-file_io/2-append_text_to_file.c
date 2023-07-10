#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The content to append
 * Return: Returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	written = write(fd, text_content, len);
	if (fd == -1 || written == -1)
		return (-1);
	close(fd);
	return (1);
}
