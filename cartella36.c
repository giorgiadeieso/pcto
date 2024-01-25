#include <stdio.h>

int main()
{
    int mesi[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *giorni[7] = {"lun", "mar", "mer", "gio", "ven", "sab", "dom"};
    int g = 0;
    int m = 0;
    int qg = 0;
    int gs = 0;
    int p = 0;
    printf ("inserire un giorno (1-31)\n");
    scanf ("%d", &g);
    printf ("inserire un mese (1-12)\n");
    scanf ("%d", &m);

    if (m==1) 
    {
        p = g%7 - 1;
        printf ("%s", giorni[p]);
    } 
    else 
    {
     
         for (int i = 0; i < m; ++i)
        {
            gs = gs+mesi[i];
            printf ( "gs = ");  printf ("%d",  gs);
        }
        gs = gs + g;
        p=(gs%7)-1;
         printf ( "p = " );  printf ("%d",p);
        printf ("%s",giorni[p]);
    }
/*
    while (m - 1 >= 0)
    {
        m = m -1;
        qg = qg + mesi[m - 1];
    }
    qg = qg + g;
    gs = qg % 7;
    printf ("il giorno è:\n");
    printf ("%s\n", giorni[gs]);*/
}

