#include "sort.h"

/**
 *swap - swaps two integrs in order of ascending
 *@a: the first integer
 *@b: the second integer to compare to
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *selection_sort - sorts integrs in ascending using selection sort
 *@array: the array of integrs
 *@size: the sixe of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t min, i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
