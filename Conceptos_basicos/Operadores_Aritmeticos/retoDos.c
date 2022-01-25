#include <stdio.h>
#include <stdlib.h>

int main (){
    //creamos las variables
    float celcius;
    float fahrenheit;
    
    //pedimos los datos
    printf("Ingrese una temperatura en Fahrenheit para convertir a celcius: \n");
    scanf("%f" , &fahrenheit);
    
    //convercion
    celcius = (fahrenheit - 32) * 5 / 9;
    
    //devolvemos el resultado
    printf("El resultado de la convercion es: %f \n", celcius);
    
    return 0;
}