#include "main.h"

/**
 * swap_int - swap variable values
 * @n: pointer a
 * @n: pointer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
