#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @name: Dog name.
 * @age: Dog Age.
 * @owner: Dog owner name.
 * @d: pointer of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
