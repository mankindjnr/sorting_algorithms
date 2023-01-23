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
	int flag = 0;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				flag = 1;
			}
		}
		print_array(array, size);

		if (flag == 0)
			break;
	}
}
