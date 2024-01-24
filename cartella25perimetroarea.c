#include <stdio.h>

int main()
{
    int latouno;
    int latodue;
    int base;
    int altezza;
   
    printf ("inserire la base del triangolo\n");
    scanf ("%d", &base);
    printf ("inserire un lato del triangolo\n");
    scanf ("%d", &latouno);
    printf ("inserire l'altro lato del triangolo\n");
    scanf ("%d", &latodue);
    printf ("inserire l'altezza del triangolo\n");
    scanf ("%d", &altezza);
    int perimetro;
    int area;
    perimetro == latouno + latodue + base;
    area ==  base * altezza /2;
    printf ("perimetro:%d\n", latouno + latodue + base);
    printf ("l'area:%d\n", base*altezza/2);
}