#include<stdio.h>

/**
 * main - Entry
 *
 * Return: always 0
 */

int main (void){

	char i;

	ifor (i = 'a'; i <= 'z' ; i++)
	
		putchar(i);


	for (i = 'A' ; i <= 'Z' ; i++)
	
		putchar(i);

	putchar('\n');

	return (0);
}

