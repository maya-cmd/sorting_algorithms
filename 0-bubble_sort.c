#include "sort.h"

/**
* bubble_sort - sorts an array of integers in an order that is ascending
* @array: The  array of integers input
* @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int swap_occurance= -1;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (swap_occurance)
	{
		swap_occurance = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap_occurance++;

				print_array(array, size);
			}
		}
	}
}
