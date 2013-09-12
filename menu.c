#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char menu (const char mopc[][30], const char *titulo)
{
    char opc = pediropc(mopc,titulo, "\nIngrese su opcion... \n");
    while(strchr(mopc[0], opc) == NULL) // Strchr(); busca en una cadena un caracter que coincida con la opcion ingresada
    opc = pediropc(mopc, titulo, "\nOpcion invalida, ingrese nuevamente. \n");
    return opc;
}

int pediropc(const char mopc[][30], const char *titulo, const char *msj)
{
    int i;
    int CantOpc;
    int opc;
    system("cls");

    CantOpc = strlen(mopc[0]);
    puts(titulo);

    for(i=1; i <= CantOpc; i++)
    {
        printf("%c - %s \n", mopc[0][i-1], mopc[i]);
    }
    puts(msj);
    fflush(stdin);
    opc = getchar();

    return opc;
}
