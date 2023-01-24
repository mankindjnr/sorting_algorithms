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
 *partition - the lomuto partition
 *@low: the lower bound
 *@high: higher bound
 *Return: the pivotIndex in the partitioned array
 */
int partition(int *array, size_t low, size_t high)
{
	int pivot;
	size_t i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, high + 1);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, high + 1);

	return (i + 1);
}

/**
 *Quick_Sort - the main recursive quick sorrt function
 *@low: the low bound index
 *@high: the highest bound index
 */
void Quick_Sort(int *array, size_t low, size_t high)
{
	int pivotIndex;

	if (low < high)
	{
		pivotIndex = partition(array, low, high);
		Quick_Sort(array, low, pivotIndex - 1);
		Quick_Sort(array, pivotIndex + 1, high);
	}
}

/**
 *quick_sort - sorts an array using quick sort lomuto
 *@array: the array to sort
 *@size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	Quick_Sort(array, 0, size - 1);
}
