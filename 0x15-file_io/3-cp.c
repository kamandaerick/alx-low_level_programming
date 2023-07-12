#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function
 * @agrc: The number of arguments passed
 * @argv: The arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *buffer, *file_to, *file_from;
	int fd_to, fd_from;
	ssize_t bytes_read;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);	
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if ((fd_to) == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	
	buffer = malloc(sizeof(char) * 1024);
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer)) > 0))
			write(fd_to, buffer, fd_from);
	close(fd_from);
	close(fd_to);
	return (0);
}
