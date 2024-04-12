#include "sort.h"

/**
 * bubble_sort - A function for bubble sorting.
 * @array: The array to sort.
 * @size: The length of the array.
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	size_t index = 0;
	int temporary = 0;
	int swap_count = -1; /* Counter to track the number of swaps */

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return;

	/* Loop until no swaps are made in a pass through the array */
	while (swap_count != 0)
	{
		swap_count = 0; /* Reset the swap counter for each pass */

	/* Iterate over the array */
	for (index = 0; index < (size - 1); index++)
	{
		/* If the current element is greater than the next element, swap them */
		if (array[index] > array[index + 1])
		{
			temporary = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temporary;

		swap_count++; /* Increment swap counter */

		/* Print the array after each swap */
		print_array(array, size);
		}
	}
	}
}
