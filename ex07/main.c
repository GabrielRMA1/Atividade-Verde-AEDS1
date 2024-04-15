#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    scanf("%i",&a);
    if (a >= 8 && a <= 10) {
        printf("Otimo");
    } else if (a == 7 && a<8) {
        printf("Bom");
    } else if (a >= 5 && a < 7) {
        printf("Regular");
    } else {
        printf("Insatisfatorio");
    }
     return 0;
}
