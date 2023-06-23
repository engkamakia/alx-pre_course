#ifndef WOOF_H
#define WOOF_H

/**
 * struct dog - structure defining a dog and its members.
 *
 * @name: member defining the dogs name.
 *
 * @age: member defining the dogs age.
 *
 * @owner: member defining the dogs owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - synonym for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
