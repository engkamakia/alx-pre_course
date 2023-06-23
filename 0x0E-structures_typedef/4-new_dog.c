#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: member for the name of dog.
 * @age: member for the age of dog.
 * @owner: member for the owner of dog.
 *
 * Return: pointer pointing to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length, owner_length, i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (name_length = 0; name[name_length]; name_length++)
		;
	name_length++;
	new_dog->name = malloc(name_length * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	owner_length++;
	new_dog->owner = malloc(owner_length * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
