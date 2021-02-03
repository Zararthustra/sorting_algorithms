#include "sort.h"

void sort_from_pivots(int *array, size_t size, int low, int high);
size_t lomuto_scheme(int *array, size_t size, int low, int high);
void swap(int *array, int i, int j);

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm and Lomuto partition scheme
 *
 * @array: array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (!array || size < 2)
		return;
	sort_from_pivots(array, size, low, high);
}

/**
 * sort_from_pivots - sorts array recursively each time pivot moved
 * pivot initialized with lomuto scheme partition
 *
 * @array: array input
 * @size: size of array
 * @low: lowest index
 * @high: highest index
 */
void sort_from_pivots(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_scheme(array, size, low, high);
		sort_from_pivots(array, size, low, pivot - 1);
		sort_from_pivots(array, size, pivot + 1, high);
	}
}


/**
 * lomuto_scheme - Lomuto partition scheme
 * (last index of the array is pivot)
 *
 * @array: array input
 * @size: size of array
 * @low: lowest index
 * @high: highest index
 *
 * Return: pivot index
 */
size_t lomuto_scheme(int *array, size_t size, int low, int high)
{
	int i, j;
	int pivot;

	pivot = array[high];
	i = low;
	j = low;
	while (j < high)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
			i++;
		}
		j++;
	}
	}
	}

	if (array[high] < array[i])
	{
		swap(array, i, high);
		print_array(array, size);
	}

	return (i);
}

/**
 * swap - simple func to swap two ints in array
 *
 * @array: array input
 * @i: first int
 * @j: second int
 */
void swap(int *array, int i, int j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}
