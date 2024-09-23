#include <stdio.h>
#include <string.h>

void compress(const char *str, char *new_str) {
    int length = strlen(str);
    int index = 0;

    for (int i = 0; i < length; i++) {
        // סמן את תחילת הרצף
        new_str[index++] = str[i];
        
        // המשך לספור את התווים העוקבים
        while (i + 1 < length && str[i] + 1 == str[i + 1]) {
            i++;
        }

        // אם היו יותר משניים, הוסף את המקף והאחרון
        if (i + 1 < length && str[i] + 1 != str[i + 1]) {
            new_str[index++] = '-'; // הוסף מקף
            new_str[index++] = str[i + 1]; // הוסף את האות האחרונה
        }
    }

    new_str[index] = '\0'; // סיים את המחרוזת
}



int main() {
    char str[51]; // מחרוזת באורך מקסימלי 50 + 1 עבור ה-null terminator
    char compressed[102]; // מספיק מקום עבור המחרוזת הדחוסה

    printf("הכנס מחרוזת (עד 50 תווים): ");
    fgets(str, sizeof(str), stdin); // קלט המחרוזת

    // הסרת תו חדש אם קיים
    str[strcspn(str, "\n")] = 0;

    compress(str, compressed);
    printf("המחרוזת הדחוסה היא: %s\n", compressed);

    return 0;
}

