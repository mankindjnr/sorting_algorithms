#include "sort.h"

/**
 *shell_sort - knuth sequence on shell sort
 *@array: the array to size
 *@size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, j;
	int i, temp;

	for (gap = size * 3 + 1; gap >= 1; gap = gap / 3)
	{
		for (j = gap; j < size; j++)
		{
			for (i = j - gap; i >= 0; i = i - gap)
			{
				if (array[i + gap] > array[i])
				{
					break;
				}
				else
				{
					temp = array[i + gap];
					array[i + gap] = array[i];
					array[i] = temp;
				}
			}
		}
		print_array(array, size);
	}
}
