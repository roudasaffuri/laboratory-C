#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int num = -20284;

    int arr[10] = {0}; // Initialize the array to zero

    while (num != 0) {
        arr[abs(num % 10)]++; // Use abs() to handle negative digits
        num /= 10;
    }

    // Printing the frequency of each digit
    for (int i = 0; i < 10; i++) {
        printf("digit %d = %d\n", i, arr[i]);
    }

    return 0;
}
