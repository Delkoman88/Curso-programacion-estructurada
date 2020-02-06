#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Primer reto de la clase
int main()
{
    //Se declaran las 3 variables
    int X;
    int Y;
    int Z;

    //Ingresar datos
    printf("Ingresa el valor de X: ");

    scanf("%i", &X);

    printf("Ingresa el valor de Y: ");

    scanf("%i", &Y);

    //Intercambio de datos con ayuda de Z
    Z = X;
    X = Y;
    Y = Z;

    //Se muestran los valores de X y Y invertidos
    printf("El valor de X  es: %i \n", X);

    printf("El valor de Y es: %i \n", Y);

    return 0;
}
