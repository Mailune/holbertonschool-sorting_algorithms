#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the selection sort algorithm.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum;
	/* Temporary variable for swapping */
	int temporary = 0;

	/* Iterate over the array */
	for (i = 0; i < (size - 1); i++)
	{
	minimum = i; /* Assume the minimum element is at index i */

	/* Find the index of the minimum element in the unsorted part of the array */
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[minimum])
		{
		minimum = j; /* Update the index of the minimum element */
		}
	}

	/* If the index of the minimum element is not the same as i */
	/* swap the elements */
	if (minimum != i)
	{
		temporary = array[i];
		array[i] = array[minimum];
		array[minimum] = temporary;

		/* Print the array after each swap */
		print_array(array, size);
	}
	}
}

