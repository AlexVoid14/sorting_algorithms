#include "sort.h"

/**
 * swap_int - swap two integers in an array
 * @a: first integer to swap
 * @b: second integer to swap
 */

void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array in ascending order using selection sort
 * @array: an array of integers
 * @size: size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_int(array + i, min);
			print_array(array, size);
		}
	}
}

