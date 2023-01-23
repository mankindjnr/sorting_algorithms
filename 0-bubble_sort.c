#include "sort.h"

/**
 *bubble_sort - sort integers using bubble sort
 *@array: the array of integers
 *@size: the sizze of a the array
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
			print_array(array, size);
		}
	}
}
