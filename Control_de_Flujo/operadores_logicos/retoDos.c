#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    
    printf("Ingrese la calificacion del examen: ");
    scanf("%i", &nota);
    
    if ((nota >= 90) && (nota <= 100))
    {
        printf("Aprobado, felicitaciones n.n");
    }
    else if ((nota < 90) && (nota >= 60))
    {
        printf("Aprobado");
    }
    else if ((nota < 60) && (nota >= 0))
    {
        printf("Reprobado");
    }
    else
    {
        printf("No ingreso una calificacion de 0 a 100");
    }
    
    return 0;
}
