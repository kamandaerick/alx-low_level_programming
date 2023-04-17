#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog's information
 * @name: First member (dog's name)
 * @age: Second member (dog's age)
 * @owner: Third member (Dog's owner)
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
