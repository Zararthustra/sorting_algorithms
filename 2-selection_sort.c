#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: array of int
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int mindex;
	int tmp;

	if (!array)
		return;
	i = 0;
	while (i < size - 1)
	{
		mindex = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[mindex])
				mindex = j;
			j++;
		}
		tmp = array[i];
		array[i] = array[mindex];
		array[mindex] = tmp;
		if (i != mindex)
			print_array(array, size);
		i++;
	}
}
