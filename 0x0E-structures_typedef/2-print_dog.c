#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - The function prints the properties of struct dog
 * @d: struct dog to be printed
 */
void print_dog(struct dog *d)
{
	int i;

	if (d == NULL)
		return;
	for (i = 0; i < 3; i++)
	{

		if ((*d).owner == NULL)
			printf("Owner: nil\n");
		if ((*d).name == NULL)
			printf("Name: nil\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
