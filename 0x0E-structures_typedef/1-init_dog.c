#include "dog.h"

/**
 * init_dog - function that initializes a structure called dog.
 * @d: pointer pointing the structure.
 * @name: pointer to member(name).
 * @age: pointer to member(age).
 * @owner: pointer to member(owner).
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d){
d->name = name;
d->age = age;
d->owner = owner;
}
}
