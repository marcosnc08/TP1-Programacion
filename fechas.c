#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void fechas(void)
{
    char mopcfecha[][30] = {"VQ","Validar","Salir"};
    char opcfecha;
    int di,me,an;

    do
        {
            opcfecha = menu(mopcfecha, "Fecha \n");
            switch(opcfecha)
                   {

                    case 'V':
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
                                        {
                                            printf("La fecha ingresada es valida\n");
                                        }else
                                            printf("La fecha ingresada es invalida\n");
                                            puts("Presione ENTER para continuar");
                                            getch();

                    case 'R':
                        //ACA VA LA FUNCION DE FECHA QUE FALTA !!!!!
                        break;

                   }
        }while(opcfecha!='Q');
            return 0;


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
                                                            if(z%4==0 && z%400==0 && z%100!=0)
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


