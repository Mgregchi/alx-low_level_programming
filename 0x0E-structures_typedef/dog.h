#ifndef DOG_H
#define DOG_H

/**
* struct dog - Short description
* @name: char - Dog name
* @age: float - Dog age
* @owner: char - Dog owner
*
* Description: Struct of a Dog with three attributes
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

