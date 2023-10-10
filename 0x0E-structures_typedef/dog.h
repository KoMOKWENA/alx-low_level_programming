#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a dog struct
 * @name: name of the dog 
 * @age: the age of the dog 
 * @owner: name of the owner 
 */

struct dog
{
char *name;
float age;
char *owner;
};


typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);

#endif

