#include <stdio.h>

// Function prototype
// void swap(int *x, int *y); // Original
void swap(int *, int *) // Modified // No need to specify the variable names in function prototype

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Call by reference
    swap(&a, &b);

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition using call by reference
void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
