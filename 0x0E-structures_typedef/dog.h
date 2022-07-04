#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct definition for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;

#endif
