#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float suma(float numero1, float numero2)
{
    return numero1 + numero2;
}

float resta(float numero1, float numero2)
{
    return numero1 - numero2;
}

float multiplicacion(float numero1, float numero2)
{
    return numero1 * numero2;
}

float division(float numero1, float numero2)
{
    return numero1 / numero2;
}

int factorial(int numero)
{
    int factorial = 1, contador;

    for(contador = 1; contador <= numero; contador++)
    {
        factorial = factorial * contador;
    }
    return factorial;
}

float pedirNumero(char texto[])
{
    float numero;
    printf("%s", texto);
    scanf("%f", &numero);

    return numero;

}

void mostrar(char texto[], float numero)
{
    if(numero == (int) numero)
    {
        printf("%s%i \n", texto, (int) numero);
    }
    else
    {
        printf("%s%.2f \n", texto, numero);
    }
}
