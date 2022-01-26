#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("los primeros 100 numeros naturales \n");
    
    int x = 1;
    
    do
    {
        printf("%i \n", x);
        x++;
    } while (x <= 100);
    
    return 0;
}
