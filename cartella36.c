#include <stdio.h>

int main()
{
    int g;
    int m;
    int a;
    int gs = 1;
    int gg1 = 1;
    int gg2 = 1;
    int a2 = 2024;
    int qg = 0;
    boolean bisest = false;
    printf ("inserire il giorno di nascita (1-31)\n");
    scanf ("&d", &g);
    printf ("inserire il mese di nascita (1-12)\n");
    scanf ("&d", &m);
    printf ("inserire l'anno di nascita (aaaa)\n");
    scanf ("&d", &a);
    while ( bisest == false)
    {
        if (m = 11 || m = 4 || m = 6 || m = 9)
        {
            qg = qg + (30 - g);
        }
        else 
        {
            qg = qg + (31 - g);
        }
    }
}

