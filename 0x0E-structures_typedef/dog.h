#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the dog info
 * @name: the value
 * @owner: the value
 * @age: the value
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - data struct dog
 */
typedef struct dog dogs_t;
void init_dog(struct dog *d, float age, char *name,  char *owner);
void print_dog(struct dog *d);
dogs_t *new_dog(float age, char *name, char *owner);
void free_dog(dogs_t *d);
char *_strcpy(char *des, char *sr);
int _strlen(char *s);
#endif
