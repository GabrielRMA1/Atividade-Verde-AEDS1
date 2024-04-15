#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int velocidade,carro,relacao;
    scanf("%i",&velocidade);
    scanf("%i",&carro);
    relacao=carro-velocidade;
    if(carro<=velocidade){
        printf( "Motorista respeitou a lei");
    }if(relacao>=1 && relacao<=10){
        printf( "Multa de 50 reais");
    }if(relacao>=11 && relacao<=30){
        printf( "Multa de 100 reais");
    }if(relacao>30){
        printf( "Multa de 200 reais");
    }
    return 0;
}
