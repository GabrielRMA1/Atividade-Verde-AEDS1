#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v,positivo,negativo,zero;
    positivo=negativo=zero=0;
    scanf("%i", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%i", &v);
        if(v > 0)
        {
            positivo++;
        }
        else
        {
            if(v < 0)
            {
                negativo++;
            }
            else
            {
                zero++;
            }
        }
    }
    printf("%d POSITIVOS\n", positivo);
    printf("%d NEGATIVOS\n", negativo);
    printf("%d ZEROS\n", zero);
    return 0;
}
