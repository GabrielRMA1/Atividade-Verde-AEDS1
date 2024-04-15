#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero,centena,dezena,unidade,aux;
   scanf("%i",&numero);
   centena=numero/100;
   dezena=((numero%100)/10)*10;
   unidade=((numero%100)%10)*100;
   aux=unidade+dezena+centena;
   printf("%i",aux);
   return 0;

}
