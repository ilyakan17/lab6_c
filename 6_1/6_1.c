#include <stdio.h>

#define SWAP(type, a, b) do { \
    type temp = a; \
    a = b; \
    b = temp; \
} while (0)

int main() {
    int num1, num2;
    printf("Enter 2 elements: ");
    scanf("%d %d", &num1, &num2);

    printf("Before: num1 = %d, num2 = %d\n", num1, num2);

    SWAP(typeof(num1), num1, num2);

    printf("After: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
