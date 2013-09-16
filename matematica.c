#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "matematica.h"
#include "menu.h"

void matematica(void)
{
    char mopcmat[][30] = {"FCQ","Factorial","Combinatorio","Salir" };
    char opcmat;

    do
        {
            opcmat = menu(mopcmat, "Operaciones matematicas \n");
            switch(opcmat)
            {
                case 'F':
                        opcion_factorial();
                    break;
                case 'C':
                        combinatorio();
                    break;
            }
        }while(opcmat!='Q');
}


int Factorial(int x)
{
	long int factorial;
	int i;

    factorial = 1;
	if(x == 0)
		return 1;
	else
	{
    	for(i=x; i>0; i--)
    		factorial *= i;
	} return factorial;

}


void combinatorio(void)
{
    long int NumeroCombinatorio;
    long int dividendo;
    long int divisor;
    int n;
    int m;
    int resta;

    do
        {
            printf("m debe ser mayor o igual a n, y n mayor o igual a 0.\n");
            printf("Ingrese m:\n");
            scanf("%d",&m);
            printf("\nIngrese n:\n");
            scanf("%d",&n);
        } while(m < n || n < 0);

    dividendo = Factorial(m);
    resta=(m-n);
    divisor = Factorial(n) * Factorial(resta);

    NumeroCombinatorio = dividendo / divisor;

    printf("\nEl numero combinatorio es: %li\n", NumeroCombinatorio);
    puts("presione ENTER para continuar");
    getch();
}

// Funciones de los menu.

void opcion_factorial()
{
    int numero;

    printf("Ingrese un Numero Natural:\n\n");
    scanf("%d", &numero);

    printf("\nEl resultado es \"%d\" \n",Factorial(numero));
    puts("Presione ENTER para continuar");
    getch();
}

