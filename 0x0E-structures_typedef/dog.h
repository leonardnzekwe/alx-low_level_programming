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

/**
 * dog_t - dog structure typedef
 */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
