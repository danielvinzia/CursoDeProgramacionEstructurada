#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tama;
    int mayor = 0;
    
    printf("Encontrar el numero mas grande de un arreglo \n");
    
    printf("que tan grande es el arreglo, ingrese un valor: ");
    scanf("%i", &tama);
    
    int arreglo[tama];
    
    for (int i = 0; i < tama; i++)
    {
        printf("ingrese el valor %i del arreglo: ", i+1 );
        scanf("%i", &arreglo[i]);
    }
    
    for (int i = 0; i < tama; i++)
    {
        if (mayor < arreglo[i])
        {
            mayor = arreglo[i];
        }
    }
    
    printf("El numero mayor es: %i", mayor);
    
    return 0;
}
