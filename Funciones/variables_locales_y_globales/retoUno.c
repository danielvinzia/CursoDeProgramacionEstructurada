#include <stdio.h>
#include <stdlib.h>

char nomAlum[70];
int nota;

void evalua(int a)
{
    if (a >= 7)
    {
        printf("Felicitaciones %s aprobaste !!!", nomAlum);
    }
    else
    {
        printf("Que mal, %s estas desaprobado", nomAlum);
    }
}

int main()
{
    printf("Quieres saber si estas aprobado? \n");

    printf("Ingresa tu nombre aqui: \n");
    gets(nomAlum);

    printf("Ingresa tu nota aqui: \n");
    scanf("%i", &nota);
    
    evalua(nota);
    
    return 0;
}
