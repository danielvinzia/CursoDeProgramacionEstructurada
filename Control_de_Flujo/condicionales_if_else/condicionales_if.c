#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if, else, else if");
    
    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC = 150;
    
    printf("Condicion: \n");
    
    if (valA == valB)
    {
        printf("No se va a cumplir esta condicion");
    }
    else if (valA == valB)
    {
        printf("Tampoco se va a a cumplir esta");
    }
    else
    {
        printf("Ninguna condicion se cumplio \n");
        printf("Despues de esta linea el programa va a terminar");
    }
    
    return 0;
}
