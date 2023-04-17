#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: instance
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", ((*d).name != NULL) ? (*d).name : "(NIL)");
		((*d).age) ? printf("Age: %f\n", (*d).age) : printf("(NIL)\n");
		printf("Owner: %s\n", ((*d).owner != NULL) ? (*d).owner : "(NIL)");
	}
}
