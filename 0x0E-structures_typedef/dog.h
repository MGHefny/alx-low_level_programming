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
void init_dogs(struct dog *x, float age, char *name,  char *owner);
void print_dogs(struct dog *x);
dogs_t *new_dogs(float age, char *name, char *owner);
void free_dogs(dogs_t *x);
char *_strcpy(char *des, char *sr);
int _strlen(char *s);
#endif
