#include <stdio.h>
#include "6.h"

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    counting_sort(array, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}
