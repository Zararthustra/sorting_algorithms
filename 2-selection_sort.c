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
	while (array[i] != '\0')
	{
		mindex = i;
		j = i + 1;
		while (array[j] != '\0')
		{
			if (array[j] < array[mindex])
				mindex = j;
/*			printf("i = %d\n", i);
			printf("mindex = %d\n", mindex);
			printf("a[i] = %d\n", array[i]);
			printf("a[j] = %d\n", array[j]);
			printf("\n");					*/
			j++;
		}
		tmp = array[i];
		array[i] = array[mindex];
		array[mindex] = tmp;
/*		printf("0|  1|  2|  3|  4|  5|  6|  7|  8|  9\n");	*/
		if (i != mindex)
			print_array(array, size);
/*		printf("\n");						*/
		i++;
	}
}
