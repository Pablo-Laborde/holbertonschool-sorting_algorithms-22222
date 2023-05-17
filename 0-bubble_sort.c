#include "sort.h"

/**
 * bubble_sort- sorts
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, aux;
	int flag;

	if (array)
		do {
			flag = 0;
			for (i = 0; i < (size - 1); i++)
			{
				if (array[i] > array[i + 1])
				{
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					flag = 1;
					print_array(array, size);
				}
			}
		} while (flag);
}
