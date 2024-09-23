#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate_string(char* str) {
    // חישוב האורך של המחרוזת המקורית
    int len = strlen(str);
    
    // הקצאת זיכרון למחרוזת החדשה (כפול שניים + 1 עבור תו הסיום)
    char* new_str = (char*)malloc((2 * len + 1) * sizeof(char));
    if (new_str == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // העתקת המחרוזת המקורית פעמיים לתוך המחרוזת החדשה
    strcpy(new_str, str);
    strcat(new_str, str);

    return new_str;
}

int main() {
    char* original = "Hello";
    char* duplicated = duplicate_string(original);

    if (duplicated != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicated: %s\n", duplicated);
        free(duplicated); // שחרור הזיכרון שהוקצה
    }

char* original1 = "Helloabc";
printf("%p",original1);

char good[] = "goodlike";
int* ptr = &good;
printf("%p",ptr);

    return 0;
}
