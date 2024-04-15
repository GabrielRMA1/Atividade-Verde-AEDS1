#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float diaria,dpromocional,ocupacao1,ocupacao2,diferenca;
    scanf("%f",&diaria);
    dpromocional=diaria -(diaria*0.25);
    ocupacao1=dpromocional*(80*0.8);
    ocupacao2=diaria*(80*0.5);
    diferenca=ocupacao1-ocupacao2;
    printf("Valor promocional: %.2f\n",dpromocional);
    printf("Promocional com 80%% ocupado: %.2f\n",ocupacao1);
    printf("Normal com 50%% ocupado: %.2f\n",ocupacao2);
    printf("Diferenca entre os valores: %.2f\n",diferenca);
    return 0;
}
