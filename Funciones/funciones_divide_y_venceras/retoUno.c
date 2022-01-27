#include <stdio.h>
#include <stdlib.h>

int potencia (int a, int b)
{
    int po = 1;
    for (int i = 0; i < b; i++)
    {
        po *= a;
    }
    return po;
}

int main()
{
    int base, expo;
    
    printf("\tCalcula la potencia del numero que quieras! \n");
    
    printf("ingresa un valor para la base: ");
    scanf("%i", &base);
    
    printf("ingresa un valor para el exponente: ");
    scanf("%i", &expo);
    
    int poten= potencia(base, expo);
    printf("El resultado es: %i", poten);
    
    return 0;
}
