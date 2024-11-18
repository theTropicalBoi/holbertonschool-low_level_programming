#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Initialize a variable of type struct dog
 * @d: pointer of struct dog
 * If an element of d is NULL print nil
 * If d is NULL print nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
