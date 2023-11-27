#include "main.h"
/**
 * append_text_to_file - append text
 * @filename: a pointer
 * @text_content: The string
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int bytes_written = -1;
	
	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

	if (file_descriptor != -1 && text_content)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
	}

	if (file_descriptor != -1)
		close(file_descriptor);

	return (bytes_written != -1 ? 1 : -1);
}
