#include <stdio.h>

int main()
{
    int x;
    int numero;
    printf ("inserisci un numero\n");
    scanf ("%d", &numero);
    x = 2;
     while (x < numero)
    {
      if (numero % x == 0)
      {
        printf ("non è numero primo\n");
        break;
      }
      else 
      {
          x = x + 1;
      }
    }
    if (numero == x)
    {
        printf ("è un numero primo\n");
    }
    return (0);
}