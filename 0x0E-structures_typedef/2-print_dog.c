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

	for (i = 0; i < 3; i++)
	{
		if ((*d).owner == NULL)
			printf("Owner: nil\n");
		if ((*d).name == NULL)
			printf("Name: nil\n");
		if ((*d).age == 0.0)
			printf("Age: nil\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
