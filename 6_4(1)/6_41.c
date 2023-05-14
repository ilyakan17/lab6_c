#include <stdio.h>
#define RADIX 10
int find_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countingSortByDigit(int arr[], int size, int digit)
{
    int count[RADIX] = {0};
    int sortedArr[size];

    for (int i = 0; i < size; i++)
    {
        int d = (arr[i] / digit) % RADIX;
        count[d]++;
    } 

    for (int i = 1; i < RADIX; i++)
    {
        count[i] += count[i - 1];
    } 

    for (int i = size - 1; i >= 0; i--)
    {
        int d = (arr[i] / digit) % RADIX;
        sortedArr[count[d] - 1] = arr[i];
        count[d]--;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = sortedArr[i];
    }
}

void radix_sort(int arr[], int size)
{
    int max = find_max(arr, size);
    for (int digit = 1; max / digit > 0; digit *= 10)
    {
        countingSortByDigit(arr, size, digit);
    }
}
