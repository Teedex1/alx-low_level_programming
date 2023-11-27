#include "main.h"
/**
 * create_file - create a file and write
 * @filename: filename
 * @text_content: data
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int bytes_Written;
	int bytes_lenght;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(file_descriptor);
		return (-1);
	}

	bytes_lenght = 0;
	while (text_content[bytes_lenght] != '\0')
	{
		bytes_lenght++;
	}
	bytes_Written = write(file_descriptor, text_content, bytes_lenght);
	if (bytes_Written == -1 || bytes_Written != bytes_lenght)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
