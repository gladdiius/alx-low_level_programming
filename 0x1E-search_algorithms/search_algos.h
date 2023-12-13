#ifndef SEARCHALGOS_H
#define SEARCHALGOS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);
int binary_search(int *array, size_t size, int value);
#endif
