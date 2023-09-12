#ifndef DOG_H
#define DOG_H
/**
 * struct dogs - the dogs info
 * @name: the value
 * @own: the value
 * @age: the value
 */
struct dogs
{
	char *name;
	char *own;
	float age;
};
/**
 * dogs_info - date struct dogs
 */
typedef struct dogs dogs_info;
dogs_info *new_dog(char *name, float age, char *own);
void free_dog(dogs_info *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dogs *d, char *name, float age, char *own);
void print_dog(struct dogs *d);
#endif

