#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>

int binary_search(int *array, size_t size, int value);
int recursive_binary(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t left, size_t right);

#endif
