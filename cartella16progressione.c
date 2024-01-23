#include <stdio.h>

int main()
{
    int x;
    int y;
    int w;
    int diff1;
    int diff2;
    
    printf ("inserire un numero\n");
    scanf ("%d", &x);
    printf ("inserire un numero\n");
    scanf ("%d", &y);
    printf ("inserire un numero\n");
    scanf ("%d", &w);
    diff1 = y-x;
    diff2 = w-y;
    if (diff1 == diff2)
    {
        printf (" x, y e w formano una progressione aritmetica");
    }
    else 
    {
        printf ("x, y e w non formano una progressione aritmetica");
    }
}