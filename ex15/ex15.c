#include <stdio.h>

int main() {
    float precoCompra, precoVenda, totalCompra = 0, totalVenda = 0, totalLucro = 0;
    int mercadorias1 = 0, mercadorias2 = 0, mercadorias3 = 0;

    while(1)
    {
        scanf("%f", &precoCompra);
        if(precoCompra == 0)
            break;

        scanf("%f", &precoVenda);

        totalCompra += precoCompra;
        totalVenda += precoVenda;
        totalLucro += precoVenda - precoCompra;

        if((precoVenda - precoCompra) < precoCompra * 0.1)
            mercadorias1++;
        else if((precoVenda - precoCompra) <= precoCompra * 0.2)
            mercadorias2++;
        else
            mercadorias3++;
    }
    printf("%d\n", mercadorias1);
    printf("%d\n", mercadorias2);
    printf("%d\n", mercadorias3);
    printf("%.2f\n", totalCompra);
    printf("%.2f\n", totalVenda);
    printf("%.2f\n", totalLucro);

    return 0;
}