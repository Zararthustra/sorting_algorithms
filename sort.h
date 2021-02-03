#ifndef _SORTING_ALGO_
#define _SORTING_ALGO_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Print funcs */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sort_algo funcs  */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
int get_max_value(int *array, size_t size);
int *create_index_count_array(int *array, size_t size, int max_val);
int *copy_array(int *array, size_t size);
void radix_sort(int *array, size_t size);
void counting_sort_idx(int *array, size_t size, int i);
#endif
