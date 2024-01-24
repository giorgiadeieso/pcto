#include <stdio.h>

int main()
{
    int x;
    
    printf ("inserire un anno\n");
    scanf ("%d", &x);
    if (x % 400 == 0)
    {
        printf ("l'anno è bisestile");
    }
    else if ((x % 4 == 0)  && (x % 100 != 0))
    {
        printf ("l'anno è bisestile");
    }
    else 
    {
        printf ("l'anno non è bisestile");
    }
}