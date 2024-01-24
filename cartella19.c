#include <stdio.h>

int main()
{
    int x;
    int y;
    int w;
printf ("inserire un numero\n");
scanf ("%d", &x);
printf ("inserire un numero\n");
scanf ("%d", &y);
printf ("inserire un numero\n");
scanf ("%d", &w);

if ((x == y) && ( y == w ))
{
    printf ("il triangolo è equilatero\n");
}
else if ((x==y) && (x !=w)) 
{
    printf ("il triangolo è isoscele\n");
}
else if ((y==w) && (y != x)) 
{
    printf ("il triangolo è isoscele\n");
}
else if  ((x ==w) && (x !=y))
{
    printf ("il triangolo è isoscele\n");
}
else if (x != y != w)
{
    printf ("il triangolo è scaleno\n");
}
else
{
    printf ("non è un triangolo\n");
}
}