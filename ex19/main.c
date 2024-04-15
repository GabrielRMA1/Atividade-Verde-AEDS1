#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

void remove_spaces(char *str) {
    int length = strlen(str);
    int count = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[MAX_LENGTH];

    fgets(str, MAX_LENGTH, stdin);

    str[strcspn(str, "\n")] = '\0';

    remove_spaces(str);

    printf("string:%s\n", str);

    return 0;
}
