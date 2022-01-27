#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\tReto de Arreglos Bidimensionales \n\n");

    float califi[5][6];
    float suma = 0;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            califi[i][j]= (rand() % 5) + 6;
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        califi[i][5]= 0;
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            suma += califi[i][j];
            printf("la sumatoria del las notas[%i][%i] es: %f\n", i, j, suma);
        }
        califi[i][5]= suma / 5;
        printf("\n\t\tel promedio de la fila %i es: %f \n\n", i, califi[i][5]);
        suma = 0;
    }
    return 0;
}
