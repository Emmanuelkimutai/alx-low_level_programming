#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains variables
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
