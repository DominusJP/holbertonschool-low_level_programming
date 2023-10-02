#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary search.
 * @array: A pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if 'value' is not present
 * in the array or if 'array' is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        print_array(array, left, right);

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1); // Value not found
}

/**
 * print_array - Prints elements of an array within a specified range.
 * @array: A pointer to the array.
 * @start: The starting index of the range.
 * @end: The ending index of the range.
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}

