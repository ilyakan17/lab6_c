#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int x) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            return binary_search_recursive(arr, mid + 1, right, x);
        } else {
            return binary_search_recursive(arr, left, mid - 1, x);
        }
    }

    return -1;
}
