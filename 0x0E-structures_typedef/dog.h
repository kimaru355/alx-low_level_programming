#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name in structure
 * @age: age of 'name'
 * @owner: owner of structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif /* !DOG_H */
