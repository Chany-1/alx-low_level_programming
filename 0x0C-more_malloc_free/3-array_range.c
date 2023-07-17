#include "main.h"
#include <stdliib.h>

/**
 * array_range - function that creates array of integers.
 * @min: minimum integr in array.
 * @max: maximum integer in array.
 *
 * The array created should contain all the values from min (included)
 * to max(included), ordered from min to max
 * If min > max, return NULL.
 * If malloc fails, return NULL
 *
 * Too avoid a memory leak, the return pointer must be deallocated,
 * with free() or realloc() but realoc is forbidden here..
 *
 * Return: A pointer to the newly created array(succes).
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;			 /* p[i] */
	return (p);
}
