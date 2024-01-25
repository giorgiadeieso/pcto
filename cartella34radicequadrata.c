#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int radice;
    printf ("inserire un numero\n");
    scnf ("%d", &x);
    radice = sqrt (x);
    if (x > 0)
    {
        printf ("la radice quadrata di x è: %d", radice);
    }
    else if (x < 0)
    {
        printf ("errore");
    }
    