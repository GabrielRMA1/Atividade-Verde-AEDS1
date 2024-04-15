#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

void break_and_print_words(char *str)
{
    char *word = strtok(str, " ");
    while (word != NULL)
    {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
}

int main()
{
    char str[MAX_LENGTH];
    fgets(str, MAX_LENGTH, stdin);
    str[strcspn(str, "\n")] = '\0';
    break_and_print_words(str);

    return 0;
}
