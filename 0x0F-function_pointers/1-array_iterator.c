#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 * Return: first index for which cmp doesn't return 0, or -1
 */

void array_iterator(int *array, int size, int (*cmp)(int))

{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
