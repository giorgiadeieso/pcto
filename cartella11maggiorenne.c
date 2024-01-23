#include <stdio.h>

int main()
{
    int x;
    int y = 18;

    printf ("inserire l'età\n");
     scanf ("%d", &x);
    if ( x >= y)
    {
        printf ("x è maggiorenne \n");
    }
    else
    {
        printf ("x è minorenne\n");
    }
    return (0);
}