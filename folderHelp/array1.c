#include <stdio.h>

int main() {
    int num1[10];

    // Getting input from the user and storing it in the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number for the array: ");
        scanf("%d", &num1[i]);
    }

    // Printing the input array
    printf("Original array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", num1[i]);
    }
    printf("\n");

    int num2[10];

    // Reversing the digits of each number and storing in num2
    for (int i = 0; i < 10; i++) {
        if (num1[i] != 0) {
            int reversed = 0;
            while (num1[i] != 0) {
                reversed = reversed * 10 + num1[i] % 10;
                num1[i] /= 10;
            }
            num2[i] = reversed;
        } else {
            num2[i] = 0;
        }
    }

    // Printing the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", num2[i]);
    }
    printf("\n");

    return 0;
}
