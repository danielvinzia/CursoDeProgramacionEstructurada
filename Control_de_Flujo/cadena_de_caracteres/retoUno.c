#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\t\tEl mundo del revez, pon una frase y sera dada vuelta \n");
    
    char frase[100];
    char invert[100];
    int tama;
    
    printf("Escribe lo que quieras a continuacion: \n");
    gets(frase);
    tama = strlen (frase);
    
    for (int i = 0; i < tama; i++)
    {
        invert[tama - i] = frase[i];
    }
    
    printf("\t\tEl mundo del revez tu frase se escribe asi: \n");
    puts(invert);
    
    return 0;
}
