#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf ("inserisci un numero\n");
    scanf ("%f", &a);
    printf ("inserisci un numero diverso dal primo\n");
    scanf ("%f", &b);
    printf ("inserisci un numero diverso dai primi due\n");
    scanf ("%f", &c);
    if (( a < b ) && ( b < c ))
    {
        printf ("l'ordine è\n %f, %f, %f", a, b, c);
    }
    else if ((a < c ) && ( c < b )) 
    {
        printf ("l'ordine è\n %f, %f, %f", a, c, b);
    }
      else if ((b < a ) && ( a < c )) 
    {
        printf ("l'ordine è\n %f, %f, %f", b, a, c);
    }
      else if ((b < c ) && ( c < a )) 
    {
        printf ("l'ordine è\n %f, %f, %f", b, c, a);
    }
      else if ((c < a ) && ( a < b )) 
    {
        printf ("l'ordine è\n %f, %f, %f", c, a, b);
    }
      else if ((c < b ) && ( b < a )) 
    {
        printf ("l'ordine è\n %f, %f, %f", c, b, a);
    }
    else 
    {
        printf ("errore\n");
    }
}