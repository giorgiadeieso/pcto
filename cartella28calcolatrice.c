#include <stdio.h>
void addizione (int x, int y)
{
printf ("l'addizione dei tuoi numeri è: %d\n", ( x + y ));
}
void differenza (int x, int y)
{
printf ("la differenza dei tuoi numeri è: %d\n", ( x - y ));
}
void moltiplicazione (int x, int y)
{
printf ("la moltiplicazione dei tuoi numeri è: %d\n", ( x * y ));
}
void rapporto (int x, int y)
{
printf ("il rapporto dei tuoi numeri è: %d\n", ( x / y ));
}
int main()
{
    int x;
    int y;
    int operazione;
    printf ("ciao, inserisci un numero\n");
    scanf ("%d", &x);
    printf ("inserisci un altro numero\n");
    scanf ("%d", &y);
    printf ("quale operazione vuoi svolgere?\n1 x l'addizione\n2 x la differenza\n3 x la moltiplicazione\n4 x il rapporto\n");
    scanf (" %d", &operazione);
   if (operazione == 1)
{
    addizione (x, y);
}
    else if (operazione == 2)
{
    differenza (x, y);
}
    else if (operazione == 3)
{
    moltiplicazione (x, y);
}
    else if (operazione == 4)
{
    rapporto (x, y);
}
    return(0);
    }