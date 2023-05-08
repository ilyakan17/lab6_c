#include <stdio.h>
#include "6.h"

int main() {
    int arr[100], n, x;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array in ascending order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int index = binary_search_recursive(arr, 0, n - 1, x);

    if (index == -1) {
        printf("Element not found\n");
    } else {
        printf("Element has '%d' index\n", index);
    }

    return 0;
}
