#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "arreglos.h"
#define MAX 100

void arreglos(void)
{
    char mopcarr[][30] = {"AEQ","Agregar","Eliminar","Salir"};
    char opc;

    //Declaro las variables necesarias
    int cadena[MAX];
    int numero2;
    int posicion;
    do
        {
            opc = menu(mopcarr, "Ejercicios de Arreglos \n");
            switch(opc)
            {
                case 'A':
                    printf("Ingrese el numero y luego la posicion...\n\n");
                    scanf("%d\n", &numero2);
                    scanf("%d", &posicion);
                    printf("\n\nEl elemento %d fue insertado en el array.", insertarelemento(cadena,posicion,numero2));
                    getch();
                break;
                case 'E':
                    printf("que posicion desea eliminar?");
                    scanf("%d", &posicion);
                    eliminarelemento(cadena, posicion);
                    printf("Posicion eliminada.");
                    getch();
                break;
            }
        }while(opc!='Q');
}

void eliminarelemento (int cadena[], int posicion)
{
    cadena[posicion] = -24;
}

int insertarelemento (int cadena[], int posicion, int elemento)
{
    cadena[posicion] = elemento;
    return cadena[posicion];
}
