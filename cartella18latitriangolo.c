#include <stdio.h>

int main()
{
    int x;
    int y;
    int w;
    int s;
    int t;
    int v;
    
printf ("inserire un numero\n");
scanf ("%d", &x);
printf ("inserire un numero\n");
scanf ("%d", &y);
printf ("inserire un numero\n");
scanf ("%d", &w);
s = x + y;
t = x + w;
v = y + w;
if ((s> w) && (t> y) && (v> x))
{
    printf ("sono lati di un triangolo");
}
else
{
    printf ("non sono lati di un triangolo");
}
}