#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_cmp(const void* e1, const void* e2);
int num_cmp(const void* e1, const void* e2);
void bubble_sort(void* arr, size_t num, size_t size, int(*cmp)(const void* e1, const void* e2));
void Swap(char* x, char* y, size_t size);
