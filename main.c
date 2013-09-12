#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "matematica.h"
#include "fechas.h"
#include "matrices.h"
#include "arreglos.h"
#include "menu.h"

//Tp Programacion

int main()
{
    char mopc[][30] = {"MAFZQ", "Matematicas", "Arreglos","Fechas","Matrices","Salir"};
    char opc; // Variable donde se guarda la opcion elegida

    do
    {
        opc = menu(mopc, "Tipos de ejercicios \n");

        switch(opc) // Switch para elejir que hacer de acuerdo a la opcion ingresada
        {
        case 'M':
            matematica();
            break;
        case 'A':
            arreglos();
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
