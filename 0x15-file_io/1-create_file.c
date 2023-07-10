#include "main.h"
/**
 * create_file - creates a file
 * @filename: The name of created file
 * @text_content: Te contect of the file
 * Return: Returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	int writen;
	int wordlength = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		for (wordlength = 0; text_content[wordlength];)
			wordlength++;
	}
	fileDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writen = write(fileDescriptor, text_content, wordlength);
	if (fileDescriptor <= 0)
		return (-1);
	if (writen == -1)
		return (-1);
	close(fileDescriptor);
	return (1);
}
