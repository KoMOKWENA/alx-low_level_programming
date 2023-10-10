#include "dog.h"


/**
 * init_dog - initializes variable of type struct dog
 * @d: the dog to initialize
 * @name: the name of the fog 
 * @age: the age if the dog 
 * @owner: name of the owner 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
