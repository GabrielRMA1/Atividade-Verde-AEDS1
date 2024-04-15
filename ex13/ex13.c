#include <stdio.h>

int main() {
    float salario, maiorSalario, mediaSalario;
    int numFilhos, totalPessoas = 0, numPessoasAte100 = 0, mediaFilhos = 0;
    maiorSalario = mediaSalario = 0;

    while (1) {
        scanf("%f", &salario);

        if (salario < 0)
            break;

        scanf("%d", &numFilhos);

        mediaSalario += salario;
        mediaFilhos += numFilhos;
        totalPessoas++;

        if (salario > maiorSalario)
            maiorSalario = salario;

        if (salario <= 100)
            numPessoasAte100++;
    }

    if (totalPessoas != 0) {
        mediaSalario = mediaSalario / totalPessoas;
        mediaFilhos = mediaFilhos / totalPessoas;
    }

    printf("%.2f\n", mediaSalario);
    printf("%d\n", mediaFilhos);
    printf("%.2f\n", maiorSalario);
    printf("%.2f", ((float)numPessoasAte100 / totalPessoas) * 100);
    return 0;
}
