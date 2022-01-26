#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primero, segundo;
    
    printf("Si me das dos numeros enteros. Te dare el menor de ellos! \n");
    
    printf("Ingresa el PRIMER NUMERO: ");
    scanf("%i", &primero);
    
    printf("Ingresa el SEGUNDO NUMERO: ");
    scanf("%i", &segundo);
    
    if (primero < segundo)
    {
        printf("El numero menor es: %i", primero);
    }
    else
    {
        printf("El numero menor es: %i", segundo);
    }
    
    return 0;
}
