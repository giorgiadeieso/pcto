#include <stdio.h>

void cubo ()
{
    int numero;
    int cubo;
    printf ("inserisci un numero\n");
    scanf ("%d", &numero);
    cubo = numero * numero *numero;
    printf ("il cubo del tuo numero è: %d\n", &cubo);
}
int main()
{
    printf ("ciao\n");
    cubo ();
    cubo ();
    cubo ();
    return(0);
    }
