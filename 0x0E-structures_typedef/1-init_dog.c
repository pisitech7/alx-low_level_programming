#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: function that initialize a variable of type struct dog,
 * including the name, age, and owner. If the provided pointer to struct
 * dog is NULL, the function allocates memory for a new struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
