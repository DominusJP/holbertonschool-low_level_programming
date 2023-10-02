#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary search.
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if 'value' is not present
 * or if 'array' is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return (-1); // Return -1 if the array is NULL

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return (mid); // Return the index if the value is found

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1); // Return -1 if the value is not found
}

