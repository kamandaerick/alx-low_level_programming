#include <stdio.h>
#include "dog.h"
/**
 * print_dog - This function prints the properties of a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
