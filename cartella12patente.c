#include <stdio.h>

int main()
{
    int x;
    int Italia = 18;
    int stato2 = 16;
    int stato3 = 17;
    int stato4 = 21;
printf ("inserire l'età\n");
     scanf ("%d", &x);
    if ( x >= Italia)
    {
        printf ("x può prendere la patente in: stato2, stato3, Italia \n");
    }
    else if (x>= stato2)
    {
        printf ("x può prendere la patente in: stato2 \n");
    }
    else if (x>= stato3)
    {
        printf ("x può prendere la patente in: stato2 e stato3\n ");
    }
    else if (x>= stato4)
    {
        printf ("x può prendere la patente in: stato2, stato3, Italia, stato4\n");
    
    }
    else if (x< stato2)
    {
        printf ("x non può prendere la patente in nessuno stato");
    }
    return (0);
}