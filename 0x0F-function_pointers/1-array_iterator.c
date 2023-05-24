#include "function_pointers.h"

/**
 * array_iterator - a function given as
 * a parameter on each element of an array.
 * @array: the array to execute function on
 * @size: the size of an array
 * @action: a pointer to the array you need to use
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
