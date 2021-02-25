/*
*   Práctica IA: Búsqueda
*   Autores: Aram Pérez Dios & Joel Francisco Escobar Socas 
*   Asignatura: Inteligencia Artificial
*   Grado: Ingeniería Informática (ETSII)
*   Contacto:   
*       Aram: alu0101244488@ull.edu.es
*       Joel: alu0101130408@ull.edu.es
*
*/


#include <iostream>
#include <vector>
#include "Mapa.h"
//#include "coche.h"


// Funcion que crea tablero, crea coche y introduce el coche en el tablero
int main() {

    
    //std::cout << "\n--/Menú/--\nPulse 1.Crear mapa\nPulse 2.Introducir mapa\n\n";

    //Seleccionar mapa
    //Elegir metodo de busqueda
    //llamar a resolver mapa
    
    Mapa tablero(3,3);
    tablero.Modificar_entrada(0,1);
    tablero.Modificar_obstaculo(1, 1);
    tablero.Modificar_obstaculo(0, 0);
    tablero.Modificar_obstaculo(0, 2);
    tablero.Modificar_salida(2, 2);
    tablero.Mostrar();

    return 0;

    //121
    //010
    //003
}
