#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de incremento y decremento \n");
    
    int value, res;
    
    value = 25;
    
    res = value++;
    
    printf("resultado: %i \n", res);
    printf("Resultado de value %i \n", value);
    
    value = 25;
    
    res = ++value;
    
    printf("resultado: %i \n", res);
    printf("Resultado de value %i \n", value);

    value = 25;
    
    res = value--;
    
    printf("resultado: %i \n", res);
    printf("Resultado de value %i \n", value);

    value = 25;
    
    res = --value;
    
    printf("resultado: %i \n", res);
    printf("Resultado de value %i \n", value);
    return 0;
}
