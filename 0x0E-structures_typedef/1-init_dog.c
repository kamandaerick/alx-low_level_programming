#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - The function initializes a variable of type struct dog
 * @d: A pointer to struct dog which is to be initialzied
 * @name: Frst element
 * @age: Second element
 * @owner: Third element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
