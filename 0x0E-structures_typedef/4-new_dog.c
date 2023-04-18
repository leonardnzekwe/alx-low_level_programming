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
	int a = 0;
	int b = 0;
	int c;
	dog_t *daisy;

	if (name == NULL || owner == NULL)
		return (NULL);
	
	while (name[a++])
		;
	while (owner[b++])
		;
	
	daisy = malloc(sizeof(dog_t));
	if (daisy == NULL)
		return (NULL);

	(*daisy).name = malloc(sizeof((*daisy).name) * a);
	if ((*daisy).name == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		(*daisy).name[c] = name[c];
	(*daisy).name[c] = '\0';

	(*daisy).age = age;

	(*daisy).owner = malloc(sizeof((*daisy).owner) * b);
	if ((*daisy).owner == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
		(*daisy).owner[c] = owner[c];
	(*daisy).owner[c] = '\0';

	return (daisy);
}
