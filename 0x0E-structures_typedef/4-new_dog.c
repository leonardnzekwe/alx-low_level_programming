#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - funtion
 * @name: param
 * @age: param
 * @owner: param
 * Return: daisy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *daisy;

	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	daisy = malloc(sizeof(dog_t));
	if (daisy == NULL)
		return (NULL);
	(*daisy).name = malloc(sizeof((*daisy).name) * a);
	if (daisy == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		(*daisy).name[c] = name[c];
	(*daisy).age = age;
	(*daisy).owner = malloc(sizeof((*daisy).owner) * b);
	if (daisy == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
		(*daisy).owner[c] = owner[c];
	return (daisy);
}
