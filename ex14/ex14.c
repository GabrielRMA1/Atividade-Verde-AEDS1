#include <stdio.h>

int main() {
    int L;

    scanf("%d", &L);
    int a = 0, b = 1;

    if (L >= 2) {
        printf("%d ", b);
        for (int i = 2; i <= L; i++) {
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}