#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Initialize a variable of type struct dog
 * @name: pointer to the dog's name
 * @owner: pointer to the dog's owner
 * @age: age of dog
 * Return: pointer to new_dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	unsigned int name_length = 0, owner_length = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(name_length + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		new_dog->name[i] = name[i];
	new_dog->name[name_length] = '\0';
	new_dog->owner = malloc(owner_length + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < owner_length; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[owner_length] = '\0';
	new_dog->age = age;
	return (new_dog);
}
