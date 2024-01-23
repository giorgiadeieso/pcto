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

if ( x == y == w )
{
    printf ("il triangolo è equilatero");
}
else if ((x==y)&& (x !=w)) 
{
    printf ("il triangolo è isoscele");
}
else if ((y==w) && (y != x)) 
{
    printf ("il triangolo è isoscele");
}
else if  ((x ==w) && (x !=y))
{
    printf ("il triangolo è isoscele");
}
else if (x != y != w)
{
    printf ("il triangolo è scaleno");
}
}