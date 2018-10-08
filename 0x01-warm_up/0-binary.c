#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index that value can be found at or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		return(recursive_binary(array, 0, size - 1, value));
	}
	return(-1);
}

/**
 * recursive_binary - recursive implentation of binary search algorithm
 * @array: array to search in
 * @left: starting index of search area
 * @right: ending index of search area
 * @value: value to search for
 *
 * Return: first index that value can be found at or -1
 */

int recursive_binary(int *array, size_t left, size_t right, int value)
{
	int mid = left + (right - left) / 2;
	if (array[mid] == value)
		return (mid);
	print_array(array, left, right);;
	if (right >= left)
	{
		if (array[mid] > value)
			return (recursive_binary(array, left, mid - 1, value));
		return (recursive_binary(array, mid + 1, right, value));

	}
	return (-1);
}


/**
 * print_array - print current search area
 * @array: array
 * @left: starting index of search area
 * @right: ending index of search area
 */

void print_array(int *array, size_t left, size_t right)
{
	if (left > right)
		return;
	printf("Searching in array:");
	while (left < right)
	{
		printf("%u, ", array[left]);
		left++;
	}
	printf("%u\n", array[left]);
}
