#ifndef dog_h
#define dog_h

/**
 * struct dog - is a dog.
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of the owner:
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
#endif
