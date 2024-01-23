#include <stdio.h>

int main()
{
    int celsius;
    int fahrenheit;
    int kelvin;
printf ("inserire la temperatura\n");
scanf ("%d", &celsius);
fahrenheit = ((9/5)* celsius + 32);
kelvin = celsius + 273,15;
if (celsius < (-273,15))
{
    printf ("errore\n");
}
else
{
    printf ("celsius: %d fahrenheit: %d kelvin: %d \n", celsius, fahrenheit, kelvin);
}
} 