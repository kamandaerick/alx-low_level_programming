#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure provides information of a dog
 * @name: The dog's name
 * @age: The dog''s age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
