#include "main.h"
/**
 * main -copies the content of a file to another
 * @argc: argument
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to;
	char buffer[BUF_SIZE];
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		return (98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		close(from);
		return (99);
	}
	while ((bytesRead = read(from, buffer, BUF_SIZE)) > 0)
	{
		bytesWritten = write(to, buffer, bytesRead);
		if (bytesWritten == -1 || bytesRead != bytesWritten)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(from);
			close(to);
			return (99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		close(from);
		close(to);
		return (98);
	}
	close(from);
	close(to);
	return (0);

}
