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
 *bubble_sort - sort integers using bubble sort
 *@array: the array of integers
 *@size: the sizze of a the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
