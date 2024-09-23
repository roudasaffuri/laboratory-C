#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* mergeStrings(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int maxLength = len1 + len2 + 1; // +1 for null terminator

    char *merged = (char*)malloc(maxLength * sizeof(char));
    if (merged == NULL) {
        return NULL; // בדוק אם ההקצאה הצליחה
    }

    merged[0] = '\0'; // התחל מחרוזת ריקה

    char *word1 = strtok(s1, " ");
    char *word2 = strtok(s2, " ");
    
    while (word1 != NULL || word2 != NULL) {
        if (word1 != NULL) {
            strcat(merged, word1);
            strcat(merged, " ");
            word1 = strtok(NULL, " ");
        }
        if (word2 != NULL) {
            strcat(merged, word2);
            strcat(merged, " ");
            word2 = strtok(NULL, " ");
        }
    }

    // הסר את הרווח האחרון אם קיים
    if (merged[strlen(merged) - 1] == ' ') {
        merged[strlen(merged) - 1] = '\0';
    }

    return merged;
}

int main() {
    char s1[] = "To day do know place which data";
    char s2[] = "this I not the to lost go away and how";

    char *mergedString = mergeStrings(s1, s2);
    if (mergedString != NULL) {
        printf("%s\n", mergedString);
        free(mergedString); // שחרר את הזיכרון שהוקצה
    }

    return 0;
}
