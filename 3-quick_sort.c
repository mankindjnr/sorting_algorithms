#include "sort.h"

/**
 *qswap - swaps two integrs in order of ascending
 *@i: the first integer
 *@array: the array
 *@theSize: the original; size of the array
 *@j: the second integer to compare to
 *Return: 1 when successful 0 otherwise
 */
int qswap(int *array, size_t i, size_t j, size_t theSize)
{
	int temp;

	if (j != i)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, theSize);
		return (1);
	}
	return (0);
}

/**
 *check - check if the array portion is sorted
 *@low: the lower bound
 *@array: the array
 *@high: the higher bound
 *Return: 1 if the array is not sorted 0 otherwise
 */
int check(int *array, size_t low, size_t high)
{
	size_t i;

	for (i = low; i < high; i++)
	{
		if (array[i] > array[i + 1])
			return (1);
	}
	return (0);
}
/**
 *partition - lomuto partition
 *@array: the array
 *@low: the lowest bound
 *@high: the highest bound
 *@theSize: original size of the array
 */
void partition(int *array, size_t low, size_t high, size_t theSize)
{
	int pivot, c, flag;
	size_t i, j;

	pivot = array[high];
	flag = 0;
	j = low;
	i = j - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			flag = qswap(array, j, i, theSize);
		}
	}
	i++;
	flag = qswap(array, j, i, theSize);

	if (flag == 0)
	{
		c = check(array, low, high);
		if (c == 1)
		{
			partition(array, low, high - 1, theSize);
		}
	}
	else
	{
		partition(array, low, i, theSize);
		partition(array, i, high, theSize);
	}
}
/**
 *quick_sort - the lomuto partition implemented using quickSort
 *@array: the array
 *@size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	size_t low;

	low = 0;

	if (size < 2 || array == NULL)
		return;

	size = size - 1;
	partition(array, low, size, size + 1);
}
