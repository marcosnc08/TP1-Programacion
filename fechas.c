#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "menu.h"
#include "fechas.h"


void fechas(void)
{
    char mopcfecha[][30] = {"VSQ","Validar","Sumar","Salir"};
    char opcfecha;

    do
        {
            opcfecha = menu(mopcfecha, "Fecha \n");
            switch(opcfecha)
                   {

                    case 'V':
                        opcion_validar_fecha();
                    break;
                    case 'S':
                        opcion_sumar_n_dias();
                    break;

                   }
        }while(opcfecha!='Q');
}

int fechavalida(int x,int y,int z)
{
    if(x<=31 && x>0)
                    {
                        if(y==01 || y==03 || y==05 || y==07 || y==8 || y==10 || y==12)
                                        {
                                         return 1;
                                        }else
                                                if(y== 04 || y== 06 || y==9 || y== 11 )
                                                    {
                                                        if(x<=30)
                                                            {
                                                                return 1;

                                                            }else return 0;
                                                    } else
                                                        if(y==02)
                                                        {
                                                            if((z%4==0 && z%100!=0) || z%400==0)//Mirar esto que lo cambie
                                                                {
                                                                    if(x<=29)
                                                                    {
                                                                        return 1;
                                                                    }else return 0;

                                                                }else
                                                                    if(x<=28)
                                                                        {
                                                                            return 1;
                                                                        }else return 0;
                                                        }else return 0;


                    }else return 0;
}

void sumar_n_dias (int dia, int mes, int ano, int n)
{
        dia += n;
        while(dia > 28)
        {
            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
            {
                if(dia > 31)
                {
                    dia -= 31;
                    mes++;
                }
            }
            else
            {
                if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
                {
                    if(dia > 30)
                    {
                        dia -= 30;
                        mes++;
                    }
                }
                else
                {
                    if(mes == 2)
                    {
                        if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                        {
                            if(dia > 29)
                            {
                                dia -= 29;
                                mes ++;
                            }
                        }
                        else
                        {
                            if(dia > 28)
                            {
                                dia -= 28;
                                mes++;
                            }
                        }
                    }
                }

            }

            if(mes > 12)
            {
                mes -= 12;
                ano++;
            }
        }

    printf("El resultado es: %d/%d/%d", dia, mes, ano);
}

// Funciones de los menu.

void opcion_validar_fecha()
{
    int di,me,an;

    printf("\nIngrese dia: ");
    fflush(stdin);
    scanf("%d",&di);
    printf("\nIngrese mes: ");
    fflush(stdin);
    scanf("%d",&me);
    printf("\nIngrese anio: ");
    fflush(stdin);
    scanf("%d",&an);
    if(fechavalida(di,me,an)!=0)
        printf("La fecha ingresada es valida\n");
    else
        printf("La fecha ingresada es invalida\n");

    puts("Presione ENTER para continuar");
    getch();
}

void opcion_sumar_n_dias()
{
    int di,me,an,n;
    printf("\nIngrese dia: ");
    fflush(stdin);
    scanf("%d",&di);
    printf("\nIngrese mes: ");
    fflush(stdin);
    scanf("%d",&me);
    printf("\nIngrese anio: ");
    fflush(stdin);
    scanf("%d",&an);
    if(fechavalida(di,me,an))
    {
        printf("\nIngrese n (dias a sumar): ");
        fflush(stdin);
        scanf("%d",&n);
        sumar_n_dias(di,me,an,n);
    }
    else
        printf("Fecha no valida !!");

    getch();
}


