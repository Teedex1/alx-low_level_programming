#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program that add positive numbers
 * @argc: the argunment count
 * @argv: the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
