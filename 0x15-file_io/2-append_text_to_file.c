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
	size_t len;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

	if (file_descriptor != -1 && text_content)
	{
		len = strlen(text_content);
		if (len > 0 && text_content[len - 1] != '\n')
		{
			if (len + 1 < BUF_SIZE)
			{
				text_content[len] = '\n';
				text_content[len + 1] = '\0';
			}
			else
			{
				close(file_descriptor);
				return (-1);
			}
		}
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	if (file_descriptor != -1)
	{
		if (close(file_descriptor) == -1)
			return (-1);
	}

	return (1);
}
