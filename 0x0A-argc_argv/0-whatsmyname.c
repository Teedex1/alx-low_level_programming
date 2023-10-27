#include <stdio.h>
/**
 * main - print the program name
 * @argv: the argument vector
 * @argc: the argument count
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
