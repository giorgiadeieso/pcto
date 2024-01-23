#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    x=0;
    printf ("quanti numeri vuoi inserire?\n");
    scanf ("%d", &z);
    while (x<z)
    {
        printf ("inserisci un numero\n");
        scanf("%d", &y);
        printf ("il tuo numero è %d\n", y+10);
        x= x + 1;
    }
    return (0);
}