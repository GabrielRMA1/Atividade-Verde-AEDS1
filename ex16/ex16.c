#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votos_nulos = 0, votos_em_branco = 0;
    int voto;

    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            default:
                break;
        }
        scanf("%d", &voto);
    }

    printf("%d\n", candidato1);
    printf("%d\n", candidato2);
    printf("%d\n", candidato3);
    printf("%d\n", candidato4);

    printf("%d\n", votos_nulos);
    printf("%d\n", votos_em_branco);

    return 0;
}
