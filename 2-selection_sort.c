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
	size_t i, pos;

	if (size > 1)
	{
		for (pos = 0; pos < size; pos++)
			for (i = pos; i < size; i++)
			{
				if (array[i] < array[pos])
				{
					a = array[i];
					array[i] = array[pos];
				}
			}
			array[pos] = a;
	}
}
