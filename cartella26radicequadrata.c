#include <stdio.h>

int main()
{
    int x;
    float temp, sqrt;
   
    printf ("inserisci un numero\n");
    scanf ("%d", &x);
    sqrt = x/2;
    temp =0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (x/temp + temp)/2;
    }
    printf ("la radice quadrata è '%d' è '%f' ", x, sqrt);
}