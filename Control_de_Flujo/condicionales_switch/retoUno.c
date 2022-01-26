#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amigo;

    printf("Estas en una granja y tienes que elegir un amigo de juego \n");
    printf("Escribe 1 si quieres que tu amigo sea un perrito \n");
    printf("Escribe 2 si quieres que tu amigo sea un conejito \n");
    printf("Escribe 3 si quieres que tu amigo sea un gatito \n");

    scanf("%i", &amigo);
    
    switch (amigo)
    {
    case 1:
        printf("Tu y tu perrito corren hasta encontrar un estanque magico \n");
        printf("Nadas en el y Consigues la Espada Excalibur");
        break;

    case 2:
        printf("Tu y tu conejito van a la huerta de la granja y ven que la tierra es removida \n");
        printf("Desentierras y consigues el Martillo de Thor");
        break;

    case 3:
        printf("Tu y tu gatito van al granero porque escuchan un ruido y ven un ave muy rara \n");
        printf("consigues calmarla y se una a ti un Ave Fenix");
        break;

    default:
        printf("Elige entre 1, 2, 3 para jugar \n");
        printf("LEE LAS OPCIONES ANTES DE TOCAR");
        break;
    }

    return 0;
}
