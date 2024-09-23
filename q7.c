#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if all characters are lowercase, if there are duplicates, and if adjacent characters are consecutive
void f(char str[]) {
    int length = strlen(str);

    // Check if all characters are lowercase
    for (int i = 0; i < length; i++) {
        if (!islower(str[i])) {
            printf("no\n");
            return;
        }
    }

    // Check for duplicate characters
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                printf("no\n");
                return;
            }
        }
    }

    // Check for consecutive characters
    for (int i = 0; i < length - 1; i++) {
        if (abs(str[i] - str[i + 1]) == 1) {
            printf("no\n");
            return;
        }
    }

    printf("yes\n");
}

int main() {
    char str[] = "editor";
    f(str);
    return 0;
}
