#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void matrices(void)
{
    char mopcmatriz[][30] = {"TSQ","Transpuesta","Simetrica","Salir"};
    char opcmatriz;

 do
        {
            opcmatriz = menu(mopcmatriz, "Matrices \n");
            switch(opcmatriz)

            {
            case 'T':
                transponer();
                break;

            case 'S':
                simetrica();
                break;
            }
        }while(opcmatriz!='Q');
        return 0;
}


void transponer(void)
{   int mat[100][100];
    int mat2[100][100];
    int m;
    int i;
    int j;

    printf("Ingrese Numero de filas y columnas: ");
    scanf("%d",&m);
    cargar_matriz(mat,m);
    printf("\nLa matriz ingresada fue: \n");
    mostrar_matriz(mat,m);
    printf("\n\nLa matriz transpuesta es: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            mat2[i][j]=mat[j][i];
        }
    }mostrar_matriz(mat2,m);
    getch();
}

void cargar_matriz(int mat[][100],int m)
{
    int i,j,dato;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nIngrese dato: ");
            scanf("%d",&dato);
            mat[i][j]=dato;
        }
    }
}

void mostrar_matriz(int mat[][100],int m)
{
    int i,j,dato;

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            dato=mat[i][j];
            printf(" %-.d ",dato);
        }
    }
}
void simetrica(void)
{
    int matriz[100][100];
    int i,j,dato;
    int m;
    i=0;
    j=0;
    printf("Ingrese numero de columnas/filas: ");
    scanf("%d",&m);
    cargar_matriz(matriz,m);

    while(i<m)
        {if (matriz[i][j]=matriz[j][i])
            {printf("Es simetrica");
            i++;
            j++;
            }else
                printf("No es simetrica");
        };

}
