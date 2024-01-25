#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int x;
    int y;
    printf ("inserire a\n");
    scanf ("%d", &a);
    printf ("inserire b\n");
    scanf ("%d", &b);
    printf ("inserire c\n");
    scanf ("%d", &c);
    float z = a*x^2 + b*x + c;
    z = 0;
    float delta = b * b - 4*a*c;

    if (delta == 0)
    {
        x = -b / 2*a;
        printf ("il valore di x è: %d\n", x);
    } 
    else if (delta < 0)
    {
        printf ("l'equazione non ammette soluzioni reali\n");
    }
    else if (delta > 0)
    {
        x = (-b + (sqrt(delta)))/2*a;
        y = (-b - (sqrt(delta)))/2*a;
        printf ("i valori di x sono: %d e %d\n", x, y);
    }
    else 
    {
        printf ("errore\n");
    }
}