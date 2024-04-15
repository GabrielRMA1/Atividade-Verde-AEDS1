#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura,perimetro,area,diagonal;
 scanf("%f",&base);
 scanf("%f",&altura);
 perimetro=2*(base+altura);
 area=base*altura;
 diagonal=sqrt(pow(base,2)+pow(altura,2));
 printf("Perimetro: %.2f\n",perimetro);
 printf("Area: %.2f\n",area);
 printf("Diagonal: %.2f\n",diagonal);
    return 0;
}
