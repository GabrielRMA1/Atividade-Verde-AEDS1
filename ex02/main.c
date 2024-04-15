#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float kw,salario,valor,desconto,nvsalario,gasto;
scanf("%f",&salario);
scanf("%f",&kw);
nvsalario=salario/700;
valor=kw*nvsalario;
desconto=valor-(valor/10);
printf("Valor do kW: %.2f\n",nvsalario);
printf("Valor a pagar: %.2f\n",valor);
printf("Valor com desconto: %.2f\n",desconto);
return 0;
}
