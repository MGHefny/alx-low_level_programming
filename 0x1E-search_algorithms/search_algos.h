#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @x: Int
 * @ind: Index node
 * @nxt: Pointer next node
 *
 * Description: singly linked list
 */
typedef struct listint_s
{
		int x;
		size_t ind;
		struct listint_s *nxt;
} listint_t;

/**
 * struct skiplist_s - singly linked list
 *
 * @x: Int
 * @ind: Index node
 * @nxt: Pointer next node
 * @ex: Pointer next node
 * Description: singly linked list
 */
typedef struct skiplist_s
{
				int x;
				size_t ind;
				struct skiplist_s *nxt;
				struct skiplist_s *ex;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);


#endif /* SEARCH_ALGO_H */
