#ifndef _dog
#define _dog
/**
 * struct dog - main struct
 * @name: first param
 * @age: second param
 * @owner: third param
 * Return: 0
 */

struct dog
    {
	    char *name;
	    char *owner;
	    float age;
    };
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
