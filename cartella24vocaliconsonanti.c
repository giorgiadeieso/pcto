#include <stdio.h>

int main()
{
    char x;
   
    printf ("inserire una lettera\n");
    scanf ("%c", &x);

    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf ("la lettera è una vocale\n");
    }
    else if ( x == 'b' || x == 'c' || x == 'd' || x == 'f' || x== 'g' || x== 'h' || x== 'j' || x== 'k' || x== 'l' || x== 'm' || x== 'n' || x == 'p'|| x== 'q'|| x == 'r' || x== 's'|| x == 't' || x== 'v' || x== 'w'|| x == 'x' || x== 'y' || x== 'z')
    {
        printf ("la lettera è una consonante\n");
    }
    else
    {
        printf ("il carattere inserito non è una lettera\n");
    }
    return(0);
}