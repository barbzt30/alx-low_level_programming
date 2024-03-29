#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Entry point
 * Description -  'a function that frees dogs'
 * @d: contains struct
 *
 * Return: 0 (success)
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
