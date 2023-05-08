#include <stdio.h>

void quicksort(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    int s[n];

    int top = -1;
    s[++top] = left;
    s[++top] = right;

    while (top >= 0) {
        right = s[top--];
        left = s[top--];

        int i = left - 1;
        int key = arr[right];

        for (int j = left; j <= right - 1; j++) {
            if (arr[j] < key) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[right];
        arr[right] = temp;

        int partition = i + 1;

        if (partition - 1 > left) {
            s[++top] = left;
            s[++top] = partition - 1;
        }

        if (partition + 1 < right) {
            s[++top] = partition + 1;
            s[++top] = right;
        }
    }
}