#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

void arreglos(void);
int cargar_vector (int cadena[]);
void mostrar_vector (int cadena[], int cant);
int insertarelemento (int cadena[], int posicion, int elemento);
void eliminarelemento (int cadena[], int posicion, int cant);

void opcion_insertar_elemento();
void opcion_eliminar_elemento();

#endif // ARREGLOS_H_INCLUDED
