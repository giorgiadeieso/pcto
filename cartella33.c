#include <stdio.h>
int main()
{
   int x;
   int n;
   int s;
   float m;
   n = 0;
   s = 0;
   m = 0;
   printf ("inserire un numero\n");
   scanf ("%d", &x);
   while ( x >= 0)
   {
    n = n + 1;
    s = s + x;
    m = s / n;
    printf ("la media: %f\n", m);
    printf ("inserire un numero: ");
    scanf ("%d", &x);
   }
   printf ("errore\n");
}