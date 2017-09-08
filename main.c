#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int suma(int a, int b);
int resta(int a, int b);
int multiplica(int a, int b);
int division(int a, int b);
int factorial(int n);
int x, y, z, result;


int main()
{
    char seguir='s';
    int opcion=0;


  while(seguir=='s');
    {
        printf("1- Calcular la suma \n");
        printf("2- Calcular la resta \n");
        printf("3- Calcular la division \n");
        printf("4- Calcular la multiplicacion \n");
        printf("5- Calcular el factorial \n");
        printf("6- Calcular todas las operaciones \n");
        printf("7- Salir\n");



        scanf("%d",&opcion);

        if(opcion>=1 && opcion<=4)
        {
            printf("Ingresar 1er operando \n");
            scanf("%d",&x);
            printf("Ingresar 2do operando \n");
            scanf("%d",&y);
        }
        else if(opcion==5)
        {
            printf("Ingresar el valor a factoriar \n");
            scanf("%d",&x);
        }
        else if(opcion==6)
        {
            printf("Ingresar 1er operando \n");
            scanf("%d",&x);
            printf("Ingresar 2do operando \n");
            scanf("%d",&y);
        }

        switch(opcion)
        {

            case 1:

                z=suma(x,y);
                printf("resultado %d",z);
                break;

            case 2:

                z=resta(x,y);
                printf("resultado %d",z);
                break;
            case 3:

                z=multiplica(x,y);
                printf("resultado %d",z);
                break;
            case 4:

                z=division(x,y);
                printf("resultado %d",z);
                break;
            case 5:

                result=factorial(x);
                printf("resultado %d",result);
                break;
            case 6:

                    z=suma(x,y);
                    printf("resultado 1 %d\n",z);
                    z=resta(x,y);
                    printf("resultado 2 %d\n",z);
                    z=multiplica(x,y);
                    printf("resultado 3 %d\n",z);
                    z=division(x,y);
                    printf("resultado 4  %d\n",z);
                    result=factorial(x);
                    printf("resultado 5 %d\n",result);
                break;

            case 7:

               seguir='n';
                break;

            default:
            break;

        }

            printf("\n desea continuar: s/n");
            scanf("%c", &seguir);

    return 0;
}
}
