#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - This function initialzie a variable of type struct dog
 * @d: The dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
