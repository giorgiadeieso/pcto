#include <stdio.h>
int main()
{
   float x;
   float n;
   float s;
   float m;
   n = 0;
   s = 0;
   m = 0;
   printf ("inserire un numero\n");
   scanf ("%f", &x);
   while ( x >= 0)
   {
    n = n + 1;
    s = s + x;
    m = s / n;
    printf ("la media: %f\n", m);
    printf ("inserire un numero: ");
    scanf ("%f", &x);
   }
   printf ("errore\n");
}