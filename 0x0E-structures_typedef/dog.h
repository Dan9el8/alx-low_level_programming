#ifndef FILE_DOG
#define FILE_DOG

/**
*struct dog - function for a structure dog
*@name: attribute pointer to char name dog
*@age: attribute of float age of a dog
*@owner: attribute of a dog owner
*/

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d,char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
