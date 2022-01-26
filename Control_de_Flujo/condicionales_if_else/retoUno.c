#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creamos y definimos la variable en 5
    int x = 5;
    int y;
    
    //pedimos un numero al usuario
    printf("Adivina que numero estoy pensando??? \n");
    printf("Ingresa un numero del 1 al 10 \n");
    scanf("%i", &y);
    
    //comparamos los resultados e informamos al usuario si adivino
    
    if (x == y)
    {
        printf("Adivinaste");
    }
    else
    {
        printf("Ese no es, Perdiste");
    }
    
    return 0;
}
