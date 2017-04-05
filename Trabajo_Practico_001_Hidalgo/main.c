#include "encabezadores.h"
#include "funciones.h"

int main()
{
    printf("---------------------------------------------------------------\n\n");
    printf("\tTRABAJO PRACTICO Nro 1 - PROGRAMACION 1\n\t\tSEBASTIAN HIDALGO\n\n\n");

    int salir = 0;
    float operando_001;
    float operando_002;

    int accion = 0;

    //bucle principal

    while(!salir)
    {
        printf("Ingreso de datos:\n");
        printf("Ingrese primer operando:\n-->");
        scanf("%f" , &operando_001);
        printf("Ingrese segundo operando:\n-->");
        scanf("%f" , &operando_002);

        printf("-- MENU PRINCIPAL --\n\nIngrese la siguiente accion a realizar:\n\n");
        printf("1 - Calcular la suma (%.2f + %.2f)\n" , operando_001 , operando_002);
        printf("2 - Calcular la resta (%.2f - %.2f)\n", operando_001 , operando_002);
        printf("3 - Calcular la multiplicacion (%.2f * %.2f)\n", operando_001 , operando_002);
        printf("4 - Calcular la division (%.2f / %.2f)\n", operando_001 , operando_002);
        printf("5 - Calcular el factorial de la parte entera del primer operando (!%d)\n", (int)operando_001);
        printf("6 - Calcular todas las operaciones\n");
        printf("7 - Salir\n\n-->");

        scanf("%d" , &accion);
        while(accion < 1 || accion > 7)
        {
            printf("Error. Ingrese la siguiente accion a realizar:\n\n-->");
            scanf("%d" , &accion);
        }

        switch(accion)
        {
        case 1:
            printf("\n\nSUMA: %.2f + %.2f = %.2f\n\n",operando_001,operando_002,suma(operando_001,operando_002));
            break;
        case 2:
            printf("\n\nRESTA: %.2f - %.2f = %.2f\n\n",operando_001,operando_002,resta(operando_001,operando_002));
            break;
        case 3:
            printf("\n\nMULTIPLICACION: %.2f * %.2f = %.2f\n\n",operando_001,operando_002,multiplicacion(operando_001,operando_002));
            break;
        case 4:
            if(division(operando_001,operando_002) != INT_MAX)
            {
                printf("\n\nDIVISION: %.2f / %.2f = %.2f\n\n",operando_001,operando_002,division(operando_001,operando_002));
            }
            break;
        case 5:
            if(factorial(operando_001) != INT_MAX)
            {
                printf("\n\nFACTORIAL: !%d = %d\n\n",(int)operando_001,factorial(operando_001));
            }
            break;
        case 6:
            printf("\n\nSUMA: %.2f + %.2f = %.2f\n",operando_001,operando_002,suma(operando_001,operando_002));
            printf("RESTA: %.2f - %.2f = %.2f\n",operando_001,operando_002,resta(operando_001,operando_002));
            printf("MULTIPLICACION: %.2f * %.2f = %.2f\n",operando_001,operando_002,multiplicacion(operando_001,operando_002));
            if(operando_002 != 0)
            {
                printf("DIVISION: %.2f / %.2f = %.2f\n",operando_001,operando_002,division(operando_001,operando_002));
            }
            if(operando_001 >= 0)
            {
                printf("FACTORIAL: !%d = %d\n",(int)operando_001,factorial(operando_001));
            }
            break;
        case 7:
            salir = 1;
            break;
        }

        printf("\n\n");
    }

    //~bucle principal

    return 0;
}
