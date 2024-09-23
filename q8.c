#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

// הגדרת המערך NewOrder
char NewOrder[ALPHABET_SIZE] = {'a', 'b', 'c', 'e', 'd', 'f', 'g', 'h', 'i', 'j', 
                                  'm', 'l', 'k', 'n', 'o', 'p', 'q', 'r', 's', 
                                  't', 'u', 'v', 'w', 'x', 'y', 'z'};

// פונקציה להשוואת שני תווים לפי הסדר במערך NewOrder
int newCompare(char ch1, char ch2) {
    if (ch1 < 'a' || ch1 > 'z' || ch2 < 'a' || ch2 > 'z') {
        return 0; // התו לא חוקי
    }

    int index1 = ch1 - 'a';
    int index2 = ch2 - 'a';
    
    // מצא את המיקום של כל תו במערך NewOrder
    int order1, order2;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (NewOrder[i] == ch1) {
            order1 = i;
        }
        if (NewOrder[i] == ch2) {
            order2 = i;
        }
    }

    if (order1 < order2) return -1; // ch1 קטן מ-ch2
    if (order1 > order2) return 1;  // ch1 גדול מ-ch2
    return 0;                        // ch1 שווה ל-ch2
}

// פונקציה לבדוק אם המחרוזת מסודרת לפי הסדר ב-NewOrder
int isSortedAccordingToNewOrder(const char *str) {
    int length = strlen(str);

    // עבור מחרוזת ריקה, החזר 1
    if (length == 0) {
        return 1;
    }

    // השוואת תווים עוקבים
    for (int i = 1; i < length; i++) {
        if (newCompare(str[i - 1], str[i]) > 0) {
            return 0; // לא מסודרת
        }
    }

    return 1; // מסודרת
}

int main() {
    char str1[] = "abc";  // דוגמה למחרוזת חוקית
    char str2[] = "not";  // דוגמה למחרוזת לא חוקית
    char str3[] = "";     // דוגמה למחרוזת ריקה

    printf("המחרוזת '%s' %s\n", str1, isSortedAccordingToNewOrder(str1) ? "מסודרת" : "לא מסודרת");
    printf("המחרוזת '%s' %s\n", str2, isSortedAccordingToNewOrder(str2) ? "מסודרת" : "לא מסודרת");
    printf("המחרוזת ריקה %s\n", isSortedAccordingToNewOrder(str3) ? "מסודרת" : "לא מסודרת");

    return 0;
}
