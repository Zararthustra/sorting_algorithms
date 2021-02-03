#include "sort.h"
/**
 * get_max_value - get_max_value
 *
 * @array: array
 * @size: size of the array
 * Return: val max
 */
int get_max_value(int *array, size_t size)
{
	int i = 0;
	int max = 0;

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * create_index_count_array - Create an array
 * from 0 to max and fill it with cumulated occurence count.
 * @array: array
 * @size: size of the array
 * @max_val: max val
 * Return: val max
 */
int *create_index_count_array(int *array, size_t size, int max_val)
{
	int *arr_index_count;
	int i;

	arr_index_count = malloc(sizeof(int) * max_val + 1);
	if (arr_index_count == NULL)
		return (0);
	for (i = 0; i < (int)size; i++)
		arr_index_count[array[i]] += 1;
	/* Create cumulate*/
	for (i = 1; i < max_val + 1; i++)
		arr_index_count[i] += arr_index_count[i - 1];
	return (arr_index_count);
}
/**
 * copy_array - copy_array array
 *
 * @array: array
 * @size: size of the array
 * Return: Array
 */
int *copy_array(int *array, size_t size)
{
	int i;
	int *copy;

	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
		return (0);
	for (i = 0; i < (int)size; i++)
		copy[i] = array[i];
	return (copy);
}

/**
 * counting_sort - counting_sort an array of integers in ascending
 * order.
 *
 * @array: array
 * @size: size of the array
 */

void counting_sort(int *array, size_t size)
{
	int *arr_index_count;
	int *input_array;
	int i;
	int max_val;
	int position;

	if (array == NULL)
		return;
	input_array = copy_array(array, size);
	max_val = get_max_value(array, size);
	arr_index_count = create_index_count_array(array, size, max_val);
	print_array(arr_index_count, get_max_value(array, size) + 1);
	/* Assign correct value at correct position and decrease 1 */
	for (i = 0; i < (int)size; i++)
	{
		position = arr_index_count[input_array[i]] - 1;
		array[position] = input_array[i];
		arr_index_count[input_array[i]] -= 1;
	}
	free(input_array);
	free(arr_index_count);
}
