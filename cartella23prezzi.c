#include <stdio.h>

int main()
{
    int x;
    float sconto;
    float costotot;
    
    printf ("inserisci il numero di x: \n");
      scanf ("%d", &x);
    while (x > 0)
    {
        costotot = x * 5;
    if (x >= 50)
    {
        sconto= (costotot * 15) /100;
        printf ("il prezzo scontato è: %f\n", costotot - sconto);
    }
    else if (x >= 30)
    {
        sconto= (costotot * 10) /100;
        printf ("il prezzo scontato è: %f\n", costotot - sconto);    
    }
    else
    {
        printf ("il prezzo totale è: %f\n", costotot);
    }
    printf ("inserisci il numero di x: \n");
    scanf ("%d", &x);
}
return (0);
}