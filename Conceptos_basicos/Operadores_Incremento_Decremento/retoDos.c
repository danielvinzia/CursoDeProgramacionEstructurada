#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerito;
    
    printf("Ingrese un numero: \n");
    
    scanf("%i", &numerito);
    
    numerito %=5;
    
    numerito++;
    
    printf("X = %i", numerito);
    
    return 0;
}
