#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: nothing
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
