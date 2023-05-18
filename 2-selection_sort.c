#include "sort.h"

/**
 * selection_sort- Sorts an array using selection sort.
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int a;
	size_t i, pos;

	if (size < 2 || array == NULL)
		return;

	for (pos = 0; pos < size - 1; pos++)
	{
		a = array[pos];/* Assume the current element is the minimum */

		for (i = pos + 1; i < size; i++)/*find the min elemnt*/
		{
			if (array[i] < a)
			{
				a = array[i];/*update the min element index*/
				array[i] = array[pos];
			}
		}

		array[pos] = a;/*swap element whit the min*/
		print_array(array, size);/*print the array*/
	}
}
