#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceSubstring(char *str, char *substr){
    
}

int main() {
    int length;

    // קבלת אורך המחרוזת מהמשתמש
    printf("Enter the length of the string: ");
    scanf("%d", &length);

    // הקצאת זיכרון למחרוזת, כולל תו הסיום '\0'
    char *str = (char *)malloc((length + 1) * sizeof(char));

    // בדיקת הצלחה בהקצאת הזיכרון
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // קבלת המחרוזת מהמשתמש
    printf("Enter the string: ");
    scanf("%s", str);

    // הדפסת המחרוזת
    printf("The string is: %s\n", str);

    // שחרור הזיכרון שהוקצה
    free(str);

    return 0;
}