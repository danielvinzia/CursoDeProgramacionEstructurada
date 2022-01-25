//llamada de las librerias
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//llamada a la funcion principal
int main ()
{
    //creacion de variables
    /*
    int integerA = 134;
    float floatA = 1.1;
    double doubleA =1.2;
    char letterA = 'P';
    */
    
    //metodo de varias lineas
    /*
    printf("El valor de nuestro entero A es: %i \n", integerA);
    printf("El valor de mi Flotante A es: % f \n", floatA);
    printf("El valor de mi double A es: %f \n", doubleA);
    printf("El Valor de mi caracter A es: %c \n", letterA);
    */
    
    //metodo de una sola linea
    /*
    printf("El valor de nuestro entero A es: %i,\nEl valor de mi Flotante A es: % f,\nEl valor de mi double A es: %f,\nEl Valor de mi caracter A es: %c \n ", integerA, floatA, doubleA, letterA);
    */
    
    int integerA;
    float floatA;
    char letterA;
    
    printf ("ingrese el valor del entero A: ");
    
    scanf ("%i", &integerA);
    
    printf("ingrese el valor del Float A: ");
    
    scanf("%f", &floatA);
    
    printf("ingrese el valor del Caracter A: ");
    
    scanf(" %c", &letterA);
    
    printf("El Entero A es: %i", integerA);
    
    printf("El Float A es: %f", floatA);
    
    printf("El Caracter A es: %c", letterA);
    
    return 0;
}