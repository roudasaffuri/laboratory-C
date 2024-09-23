#include <stdio.h>
#include <ctype.h>
#include <string.h>

int IdentifyNum(char str[]) {
    int total = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            total++;
        }
    }

    if (total == 0) return -1;
    return total;
}

int main() {
    char str[] = "Hello123";
    int num = IdentifyNum(str);

    if (num != -1) {
        printf("Total digits in the string: %d\n", num);
    } else {
        printf("No digit found in the string.\n");
    }

    int max = 0; 
    char st[256];
    printf("Enter a string: ");
    scanf("%s", st);
    
    while (strcmp(st, "END") != 0) {
        int x = IdentifyNum(st);
        if (x > max) max = x;
        
        printf("Enter a string: ");
        scanf("%s", st);
    }

    printf("Maximum number of digits in any string: %d\n", max);

    return 0;
}
