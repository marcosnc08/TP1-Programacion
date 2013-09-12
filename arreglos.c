#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "arreglos.h"
#include "menu.h"
#define MAX 100

void arreglos(void)
{
    char mopcarr[][30] = {"AEQ","Agregar","Eliminar","Salir"};
    char opc;

    //Declaro las variables necesarias
    int cadena[MAX];
    int numero2;
    int posicion;
    int cant;
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
                    cant = cargar_vector(cadena);
                    mostrar_vector(cadena, cant);
                    printf("\nque posicion desea eliminar?");
                    scanf("%d", &posicion);
                    eliminarelemento(cadena, posicion, cant);
                    cant--;
                    printf("Posicion eliminada.\n\n");
                    printf("El resultado del vector es: \n");
                    mostrar_vector(cadena, cant);
                    getch();
                break;
            }
        }while(opc!='Q');
}

int cargar_vector (int cadena[])
{
    int cant = 0;
    char salida;
    do
    {
        printf("\nIngrese valor para la posicion %d: ", cant);
        scanf("%d", &cadena[cant]);
        cant++;
        printf("Desea ingresar otro valor? (S/N): ");
        fflush(stdin);
        scanf("%c", &salida);
        toupper(salida);
    }while(salida != 'N');

    return cant;
}

void mostrar_vector (int cadena[], int cant)
{
    int i;
    printf("\n\n");
    for(i=0; i<cant; i++)
    {
        printf("%d, ", cadena[i]);
    }
}
void eliminarelemento (int cadena[], int posicion, int cant)
{
    int i;
    for(i = 0; i <= (cant - posicion); i++)
    {
        cadena[posicion] = cadena[posicion + 1];
        posicion ++;
    }
}

int insertarelemento (int cadena[], int posicion, int elemento)
{
    cadena[posicion] = elemento;
    return cadena[posicion];
}
