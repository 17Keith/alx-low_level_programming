#include "search_algos.h"
/**
  * binary_search - using binary algo
  * @array: ptr to first element
  * @size: no. of eles of array
  * @value: target value
  *
  * Return: index, or -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t p, q;
	int r;

	p = 0;
	q = size - 1;
	while ((p <= q) && (array))
	{
		print_array(array, p, q);
		r = (int)((p + q) / 2);
		if (array[r] < value)
		{
			p = r + 1;
		}
		else if (array[r] > value)
		{
			q = r - 1;
		}
		else
			return (r);
	}
	return (-1);
}

/**
  * print_array - print elements of an array
  * @array: array's element to be displayed
  * @p: beginning
  * @q: end
  */
void print_array(int *array, size_t p, size_t q)
{
	size_t abc;

	printf("Searching in array: ");
	for (abc = i; abc < j; abc++)
		printf("%d, ", array[abc]);
	printf("%d\n", array[abc]);
}
