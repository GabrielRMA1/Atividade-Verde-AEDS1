#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fat;
    float e;
    
    e=1;
    
    scanf("%i", &n);
    for(int i=1; i<n; i++)
    {
        fat=1;
        for(int f=i; f>=1; f--)
        {
            fat=fat*f;
        }
        e += 1.0/fat;
    }
    printf("%.2f", e);
    return 0;
}
