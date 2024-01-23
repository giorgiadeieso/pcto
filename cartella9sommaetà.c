#include <stdio.h>

int main()
{
   int n;
   int x;
   int y;
   int v;
   int g;
   int t = n + x + y + v + g;
    printf ("inserire l'età di n\n");
    scanf ("%d", &n);
    printf ("inserire l'età di x\n");
    scanf ("%d", &x);
    printf ("inserire l'età di y\n");
    scanf ("%d", &y);
    printf ("inserire l'età di v\n");
    scanf ("%d", &v);
    printf ("inserire l'età di g\n");
    scanf ("%d", &g);
    printf ("N= %d\n", n);
    printf ("X= %d\n", x);
    printf ("Y= %d\n", y);
    printf ("V= %d\n", v);
    printf ("G= %d\n", g);
    printf ("T= %d\n", n+x+y+v+g);
}