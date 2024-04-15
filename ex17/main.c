#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 200

int is_palindrome(char *str) {
    int length = strlen(str);
    int i, j;

    char clean_str[MAX_LENGTH];
    int clean_index = 0;
    for (i = 0; i < length; i++) {
        if (!isspace(str[i])) {
            clean_str[clean_index++] = tolower(str[i]);
        }
    }
    clean_str[clean_index] = '\0';
    for (i = 0, j = clean_index - 1; i < j; i++, j--) {
        if (clean_str[i] != clean_str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[MAX_LENGTH];
    fgets(str, MAX_LENGTH, stdin);
    str[strcspn(str, "\n")] = '\0';
    if (is_palindrome(str)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
