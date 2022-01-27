#include <stdio.h>
#include <stdlib.h>

float converPeso(float a)
{
    return a * 104.76;
}

float converDolar(float b)
{
    return b / 104.76;
}

int main()
{
    char deci;
    float plataP, plataD;
    
    printf("\tConversor de Pesos a Dolares y de Dolares a Pesos\n");
    printf("Si quieres convertir de Dolares a Pesos, Ingresa p\n");
    printf("Si quieres convertir de Pesos a Dolares, Ingresa d\n");
    scanf(" %c", &deci);
    
    switch (deci)
    {
    case 'p':
        printf("Escriba la cantidad a convertir: ");
        scanf("%f", &plataP);
        float resP = converPeso(plataP);
        printf("El resultado de su conversion es: %f", resP);
        break;
    case 'd':
        printf("Escriba la cantidad a convertir: ");
        scanf("%f", &plataD);
        float resD = converDolar(plataD);
        printf("El resultado de su conversion es: %f", resD);
        break;
    default:
        printf("Tiene que elegir entre las dos opciones\n");
        break;
    
    return 0;
    }
}