#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: - dog structure
 * @name: param
 * @age: param
 * @owner: param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
