#include "main.h"
/**
 *
 * main - copies the content of a file to another
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
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from);
		exit(99);
	}

	copy_file_contents(from, to, buffer, BUF_SIZE);

	close(from);
	close(to);

	return (0);
}
	do {
		bytesRead = read(from, buffer, BUF_SIZE);
		if (bytesRead == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from);
		close(to);
		exit(98);
		}
		
		if (bytesRead > 0)
		{
			bytesWritten = write(to, buffer, bytesRead);
			
			if (bytesRead == -1 || bytesRead != bytesWritten)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(from);
				close(to);
				exit(99);
			}
		
		}

	} while (bytesRead > 0);
	
	close(from);
	close(to);
	
	return (0);
}
