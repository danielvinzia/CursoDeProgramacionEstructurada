#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //creamos variables
    float radio;
    float altura;
    float area;
    float volumen;
    float pi = 3.141592;
    
    //pedimos los valores
    printf("Ingrese el radio del clilindro a calcular: \n");
    scanf("%f", &radio);
    printf("Ingrese la altura del clilindro a calcular: \n");
    scanf("%f", &altura);
    
    //calculamos area y volumen
    area = 2 * pi * radio * (radio + altura) ;
    volumen = pi * radio * radio * altura ;
    
    //imprimimos en pantalla los resultados
    printf("El area de su cilindro es : %f \n", area);
    printf("El volumen de su cilindro es : %f", volumen);

    return 0;
}