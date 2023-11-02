#include "main.h"
/**
 * malloc_checked - the function that allocate memory
 * @b: the memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *alloc;
	/*alloc is the short description for the allocated memory*/

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);
	else
		return (alloc);
}
