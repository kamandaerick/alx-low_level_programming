#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - This function creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 */
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len;
	int owner_len;
	int i;
	int j;

	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	for (j = 0; owner[j] != '\0'; j++)
		owner_len++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(dog_t) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return(NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
/**
 * _strcpy - This function copies one string to another
 * @dest: The destination string
 * @src: The string copied
 */
char *_strcpy(char *dest, char *src)
{
	int str_len = 0;
	int k;

	while (src[str_len] != '\0')
		str_len++;

	for (k = 0; k < str_len; k++)
		dest[k] = src[k];
	dest[k] = '\0';

	return (dest);
}

