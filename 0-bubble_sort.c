#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: array
 * @size: size of the array
 *
 * return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int tmp;

	j = 0;
	while (j < (size - 1))
	{
		i = 0;
		while (i < (size - 1 - j))
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			i++;
		}
		j++;
	}
}
