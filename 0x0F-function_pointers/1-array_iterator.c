#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over an array
 * @array: array to iterate
 * @size: number of elements of array
 * @action: funct to perfom on array
 */

void array_iterator(int *array, size_t size, void (*action)(int param))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for(i = 0; i < size;)
	{
		action(array[i]);
		i++;
	}
}
