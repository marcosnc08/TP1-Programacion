#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "matematica.h"
#include "fechas.h"
#include "matrices.h"

//Tp Programacion

int main()
{
    char mopc[][30] = {"MAFZQ", "Matematicas", "Arreglos","Fechas","Matrices","Salir"};

    char mopcarr[][30] = {"AEQ","Agregar","Eliminar","Salir"};
    char mopcfecha[][30] = {"VQ","Validar","Salir"};
    char opc,opcmat,opcarr,opcfecha; // Variable donde se guarda la opcion elegida

    do
    {
        opc = menu(mopc, "Tipos de ejercicios \n");

        switch(opc) // Switch para elejir que hacer de acuerdo a la opcion ingresada
        {
        case 'M':
            matematica();
            break;
        case 'A':
           // ACA VA LA FUNCION PARA TRABAJAR CON VECTORES !!!!!!!
            break;
        case 'F':
            fechas();
            break;
        case 'Z':
            matrices();
            break;
        }
    }while(opc!='Q');
        return 0;


}
