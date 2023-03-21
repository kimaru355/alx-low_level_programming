#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes struct dog
 * @d: struct dog
 * @name: name
 * @age: age of 'name'
 * @owner: owner of 'name'
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
