#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initializes a variable of type struct dog.
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initiate
 * @owner: owner to initialize
 *
 * Return: void.
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
