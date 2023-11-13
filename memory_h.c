#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @narr: An Array.
 * @size: Size.
 * Return: The pointer or else: NULL.
 */

void *_calloc(unsigned int narr, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (narr == 0 || size == 0)
		return (NULL);

	ptr = malloc(narr * size);

	if (ptr == NULL)
		return (NULL);

	for (; index < (narr * size); index++)
		ptr[index] = 0;

	return (ptr);
}
