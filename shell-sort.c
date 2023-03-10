#include "sort.h"

/**
 *shell_sort - knuth sequence on shell sort
 *@array: the array to size
 *#size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i;
	int j, lb;

	gap = 1;

	while (gap <= (size - 1) / 9)
	{
		gap = size * 3 + 1;
	}

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			lb = array[i];

			for (j = i - gap; j >= 0 && lb < array[j]; j = j - gap)
				array[j + gap] = array[j];
			array[j + gap] = lb;
		}
		gap = gap / 3;
		print_array(array, size);
	}
}
