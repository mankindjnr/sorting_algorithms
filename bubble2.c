#include "sort.h"

/**
 *bubble_sort - sort integers using bubble sort
 *@array: the array of integers
 *@size: the sizze of a the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
        		}
		}
		print_array(array, size);
        }
}
