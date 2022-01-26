#include <stdio.h>
#include <stdio.h>

int main()
{
    int arreglo[4];
    int resul = 1;
    
    printf("Multiplicador de valores de un arreglo \n");
    printf("Ingrese los valores \n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("ingrese el valor numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);
        resul = resul * arreglo[i];
    }
    
    printf("El resultado es: %i", resul);
    
    return 0;
}
