#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vuelta, varA, varB;
    varA = 0;
    varB = 1;
    
    printf("secuencia fibonacci \n");
    printf("ingrese cuantas vueltas de fibonacci quiere: \n");
    scanf("%i", &vuelta);
    
    printf("Su secuencia de fibonacci: \n");
    
    
    for (int i = 0; i < vuelta; i++)
    {
        printf("%i \n", varA);
        varA += varB;
        varB = varA - varB;
    }
    
    return 0;
}
