#include <stdio.h>

int main()
{
    int luna = 1969;
    int nascita;

    printf ("in che anno sei nato?\n");
    scanf ("%d", &nascita);
      int z = luna - nascita;
      int w = nascita - luna;
    if ( luna > nascita)
    {
        printf ("sei nato prima della prima volta che l'uomo è andato sulla luna\n");
        printf ("sei nato %d anni prima\n", z);
    }
    else if (z == 0)
    {
        printf("sei nato nello stesso anno della prima volta che l'uomo è andato sulla luna\n");
    }

    else if ( nascita > luna)
    {
        printf ("sei nato dopo la prima volta che l'uomo è andato sulla luna\n");
        printf ("sei nato %d anni dopo\n", w);
    }
    else 
    {
        printf ("errore\n");
    }
}