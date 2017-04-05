#include "funciones.h"
#include "encabezadores.h"


float suma(float operando_001 , float operando_002)
{
    return (operando_001 + operando_002);
}

float resta(float operando_001 , float operando_002)
{
    return (operando_001 - operando_002);
}

float multiplicacion(float operando_001 , float operando_002)
{
    return (operando_001 * operando_002);
}

float division(float operando_001 , float operando_002)
{
    if(operando_002 == 0)
    {
        printf("\n\nError. Division por cero. Resultado Indefinido\n\n");
        return INT_MAX;
    }

    return (operando_001 / operando_002);
}

int factorial(float operando_001)
{
    int factorial = 1;
    int i = 0;

    if((int)operando_001 > 0)
    {
        if((int)operando_001 != 0)
        {
            for(i = (int)operando_001 ; i > 0; i--)
            {
                factorial *= i;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        printf("\n\nError. El operando no es un entero positivo.\n\n");
        return INT_MAX;
    }


    return factorial;
}

