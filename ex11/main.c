#include <stdio.h>
#include <stdlib.h>

int main() {
    int div39 = 0, div2 = 0, div5 = 0;
    for (int i = 1; i <= 10; i++) {
        float n;
        scanf("%f", &n);

        int num = (int)n;
        int d = 0;

        if (num%3 == 0 && num%9 == 0) {
            div39++;
            d = 1;
        }
        if (num%2 == 0) {
            div2++;
            d = 1;
        }
        if (num%5 == 0) {
            div5++;
            d = 1;
        }
        if (d == 0) {
            printf("Numero nao divisivel pelos valores\n");
        }
    }

    printf("%i Numeros sao divisiveis por 3 e por 9\n", div39);
    printf("%i Numeros sao divisiveis por 2\n", div2);
    printf("%i Numeros sao divisiveis por 5\n", div5);
    return 0;
}
