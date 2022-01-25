#include <stdio.h>
#include <stdlib.h>

int main (){
    float x;
    float y;
    float inter;
    
    printf("Ingrese el valor de X: \n");
    scanf("%f", &x);
    printf("\nIngrese el valor de Y: \n");
    scanf("%f", &y);

    inter = x;
    x = y;
    y = inter;

    printf("\n");
    printf("El valor intercambiado del las cordenada X es: %f \n", x);
    printf("El valor intercambiado del las cordenada Y es: %f", y);

    return 0;
}