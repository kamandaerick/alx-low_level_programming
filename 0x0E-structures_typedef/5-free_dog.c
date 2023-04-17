#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory alloacted for struct dog
 * @d: The struct dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
