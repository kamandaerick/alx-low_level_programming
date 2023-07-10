#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads and text file and prints it to POSIX stdout
 * @filename: The name of the file containing text to eb read
 * @letters: The number of letters to be read
 * Return: returns the actual number of letters read
 * or 0 if the file cant be opened
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t fileDescriptor;
	ssize_t readLetters;
	ssize_t writtenLetters;
	char *buffer;

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	readLetters = read(fileDescriptor, buffer, letters);
	writtenLetters = write(STDOUT_FILENO, buffer, readLetters);

	free(buffer);
	close(fileDescriptor);
	return (writtenLetters);
}
