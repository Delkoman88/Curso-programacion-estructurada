#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    double doubleA;
    char letterA;

    printf("Ingresa el valor del entero A: ");

    scanf("%i", &integerA);

    printf("Ingresa el valor del float A: ");

    scanf("%f", &floatA);

    printf("Ingresa el valor del double A: ");

    scanf("%f", &doubleA);

    printf("Ingresa el valor del caracter A: ");

    scanf(" %c", &letterA);

    //En la siguiente linea estamos imprimiendo mi variable integerA
    printf("El valor del numero entero A es: %i \n", integerA);

    printf("El valor del flotante A es: %f \n", floatA);

    printf("El valor del double A es: %f \n", doubleA);

    printf("El valor del caracter A es: %c \n", letterA);

    return 0;
}
