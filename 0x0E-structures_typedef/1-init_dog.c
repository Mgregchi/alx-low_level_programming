#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: struct dog pointer address. type struct for dog.
* @name: arg to initialize to struct dog. Type char
* @age: arg to initialize to struct dog. Type int
* @owner: arg to initialize to struct dog Type char
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

