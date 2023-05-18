#include "sort.h"

/**
 * selection_sort- sorts
 * @array: array
 * @size: size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int a;
	size_t i, j, k;

	if (size > 1)
	{
		for (i = 0, k = 0; i < (size - 1); i++)
		{
			for (j = (i + 1); j < size; j++)
			{
				if (array[j] < array[i])
					k = j;
				print_array(array, size);
			}
		}
	}
}
