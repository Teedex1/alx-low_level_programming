#include <stdio.h>

/**
 * rot13 - encodes a string
 * @s: string
 * Return: pointer s
 */

char *rot13(char *s)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if ((s[i] == alpha[j]) || (s[i] == (alpha[j] + 32)))
			{
				s[i] += (13 - ((j / 13) * 26));
				break;
			}
		}
	}

	return (s);
}
