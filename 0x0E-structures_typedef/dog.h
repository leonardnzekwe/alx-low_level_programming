#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: member
 * @age: member
 * @owner: member
 *
 * Description: Structure of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
