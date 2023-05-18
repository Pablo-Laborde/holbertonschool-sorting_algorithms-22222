#include "sort.h"

/**
 * selection_sort- Sorts an array using selection sort.
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_i;
	int min_v, temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
/* Assume the current element is the minimum */
		min_i = i;
		min_v = array[i];
/*find the min elemnt*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_v)
			{
/*update*/
				min_i = j;
				min_v = array[j];
			}
		}
/*swap element whit the min*/
		if (min_i != i)
		{
			temp = array[i];
			array[i] = array[min_i];
			array[min_i] = temp;
		}
	}
}
