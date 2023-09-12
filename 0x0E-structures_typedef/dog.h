#ifndef DOG_H
#define DOG_H
/**
 * struct dogs - the dogs info
 * @n: the value
 * @o: the value
 * @a: the value
 */
struct dogs
{
	char *n;
	float a;
	char *o;
};
/**
 * dogs_t - data struct dogs
 */
typedef struct dogs dogs_t;
void init_dogs(struct dogs *d, char *n, float a, char *o);
void print_dogs(struct dogs *d);
dogs_t *new_dogs(char *n, float a, char *o);
void free_dogs(dogs_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
