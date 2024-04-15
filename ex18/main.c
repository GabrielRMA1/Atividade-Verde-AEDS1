#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

void replace_char(char *str, char old_char, char new_char) {
    for (; *str != '\0'; str++) {
        if (*str == old_char) {
            *str = new_char;
        }
    }
}

int main() {
    char first_char, second_char;
    char str[MAX_LENGTH];

    scanf(" %c", &first_char);

    scanf(" %c", &second_char);

    scanf(" ");
    fgets(str, MAX_LENGTH, stdin);

    str[strcspn(str, "\n")] = '\0';

    replace_char(str, first_char, second_char);

    printf("string:%s\n", str);

    return 0;
}


