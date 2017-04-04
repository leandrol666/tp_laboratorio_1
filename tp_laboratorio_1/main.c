#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    float numero1;
    float numero2;
    float resultado;
    int opcion = 0;
    int flagNum1 = 0;
    int flagNum2 = 0;
    int flagResultado;

    while(seguir=='s')
    {
        if(flagNum1 == 1)
        {
            mostrar("1- Ingresar 1er operando A=", numero1);
        }
        else
        {
            if(flagNum1 == 0)
            {
                printf("1- Ingresar 1er operando A=x\n");
            }
        }
        if(flagNum2 == 1)
        {
            mostrar("2- Ingresar 2do operando B=", numero2);
        }
        else
        {
            if(flagNum2 == 0)
            {
                printf("2- Ingresar 2do operando B=y\n");
            }
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        flagResultado = 0;

        switch(opcion)
        {
            case 1:
                numero1 = pedirNumero("Ingrese el primer numero: ");
                flagNum1 = 1;
                break;
            case 2:
                numero2 = pedirNumero("Ingrese el segundo numero: ");
                flagNum2 = 1;
                break;
            case 3:
                if(flagNum1 == 0 || flagNum2 == 0)
                {
                        printf("ERROR: Faltan operadores \n");
                        break;
                }
                resultado = suma(numero1, numero2);
                flagResultado = 1;
                break;
            case 4:
                if(flagNum1 == 0 || flagNum2 == 0)
                {
                        printf("ERROR: Faltan operadores \n");
                        break;
                }
                resultado = resta(numero1, numero2);
                flagResultado = 1;
                break;
            case 5:
                if(flagNum1 == 0 || flagNum2 == 0)
                {
                        printf("ERROR: Faltan operadores \n");
                        break;
                }
                if(numero2 == 0)
                {
                    printf("ERROR: La division por 0 no es posible \n");
                    break;
                }
                resultado = division(numero1, numero2);
                flagResultado = 1;
                break;
            case 6:
                if(flagNum1 == 0 || flagNum2 == 0)
                {
                        printf("ERROR: Faltan operadores \n");
                        break;
                }
                resultado = multiplicacion(numero1, numero2);
                flagResultado = 1;
                break;
            case 7:
                if(flagNum1 == 0)
                {
                        printf("ERROR: Faltan operadores \n");
                        break;
                }
                if(numero1 != (int)numero1 || numero1 <= 0)
                {
                    printf("ERROR: No es posible sacar factorial \n");
                    break;
                }
                resultado = factorial((int) numero1);
                flagResultado = 1;
                break;
            case 8:
                if(flagNum1 == 0 || flagNum2 == 0)
                {
                        printf("ERROR: Faltan operadores \n");
                        break;
                }
                resultado = suma(numero1, numero2);
                mostrar("La suma es: ", resultado);
                resultado = resta(numero1, numero2);
                mostrar("La resta es: ", resultado);
                resultado = multiplicacion(numero1, numero2);
                mostrar("La multiplicacion es: ", resultado);
                if(numero2 == 0)
                {
                    printf("ERROR: La division por 0 no es posible \n");
                }
                else
                {
                    if(numero2 != 0)
                    {
                        resultado = division(numero1, numero2);
                        mostrar("La division es: ", resultado);
                    }
                }
                if(numero1 != (int)numero1 || numero1 <= 0)
                {
                    printf("ERROR: No es posible sacar factorial \n");
                }
                else
                {
                    if(numero1 == (int)numero1 && numero1 > 0)
                    {
                        resultado = factorial((int) numero1);
                        mostrar("El factorial es: ", resultado);
                    }
                }
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("ingrese una opcion valida porfavor... \n");
                break;
        }

        if(flagResultado == 1)
        {
            mostrar("El Resultado es: ", resultado);
        }
    }
    return 0;
}
