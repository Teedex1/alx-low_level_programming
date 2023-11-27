#include "main.h"
/**
 * read_textfile - read and print to stdout
 * @filename: filename
 * @letters: size of the letters
 * Return: size read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_Read, bytes_Written;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_Read = read(file_descriptor, buffer, letters);
	if (bytes_Read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	bytes_Written = write(STDOUT_FILENO, buffer, bytes_Read);
	if (bytes_Written == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);

	return (bytes_Read);
}
