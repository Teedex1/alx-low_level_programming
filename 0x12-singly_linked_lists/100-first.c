#include <stdio.h>

void __attribute__((constructor)) print_intro(void);
/**
 * print_intro - prints a string before the main function is executed
 *
 */

void print_intro(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}

