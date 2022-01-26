#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creo el arreglo
    int arreglo[3][4];
    
    //sumatorias que doy en pantalla
    int fila1, fila2, fila3;
    fila1 = fila2 = fila3 = 0;
    
    //fila 0 la sumatoria es 4
    arreglo[0][0] = 1;
    arreglo[0][1] = 2;
    arreglo[0][2] = 0;
    arreglo[0][3] = 1;
    
    for (int i = 0; i < 4; i++)
    {
        fila1 += arreglo[0][i];
    }
    
    printf("La suma de la primer fila es: %i \n", fila1);

    // fila 0 la sumatoria es 10
    arreglo[1][0] = 1;
    arreglo[1][1] = 2;
    arreglo[1][2] = 3;
    arreglo[1][3] = 4;

    for (int i = 0; i < 4; i++)
    {
        fila2 += arreglo[1][i];
    }

    printf("La suma de la segunda fila es: %i \n", fila2);

    // fila 0 la sumatoria es 26
    arreglo[2][0] = 10;
    arreglo[2][1] = 4;
    arreglo[2][2] = 7;
    arreglo[2][3] = 5;

    for (int i = 0; i < 4; i++)
    {
        fila3 += arreglo[2][i];
    }

    printf("La suma de la tercera fila es: %i \n", fila3);

    return 0;
}
