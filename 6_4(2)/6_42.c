#include <stdio.h>

#define RANGE 100

void counting_sort(int array[], int size) {
  int count[RANGE + 1] = {0};
  int sortedArray[size];

  for (int i = 0; i < size; i++)
    count[array[i]]++;

  for (int i = 1; i <= RANGE; i++)
    count[i] += count[i - 1];

  for (int i = size - 1; i >= 0; i--) {
    sortedArray[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = sortedArray[i];
}
