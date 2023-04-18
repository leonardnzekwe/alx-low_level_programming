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

	daisy = malloc(sizeof(dog_t));
	if (daisy == NULL)
		return (NULL);
	if (name == NULL || owner == NULL || name[0] == '\0' || owner[0] == '\0')
	{
		free(daisy);
		return (NULL);
	}
	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	(*daisy).name = malloc(sizeof(char) * (a + 1));
	(*daisy).owner = malloc(sizeof(char) * (b + 1));
	if (!((*daisy).name) || !((*daisy).owner))
	{
		free((*daisy).owner);
		free((*daisy).name);
		free(daisy);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		(*daisy).name[c] = name[c];
	(*daisy).name[c] = '\0';
	for (c = 0; c < b; c++)
		(*daisy).owner[c] = owner[c];
	(*daisy).owner[c] = '\0';
	if (age < 0)
	{
		free((*daisy).owner);
		free((*daisy).name);
		free(daisy);
		return (NULL);
	}
	(*daisy).age = age;
	return (daisy);
}
