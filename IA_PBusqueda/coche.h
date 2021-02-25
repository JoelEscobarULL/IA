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

// La clase coche define el movimeinto del coche 
// y el estado del coche en todo momento ademas de que conoce las dimensiones del tablero.
class Coche {
    private:
        int x_,y_;
        int busqueda_;
        //mapa
        //std::vector visited<int>
        int Sn, Ss_, Se_, So_;
    public:
        Coche(busqueda);
        void ActualizarSensores(/*mapa*/);  //Método que el estado del coche 
        void Busqueda();  // Metodo que aplica la busqueda seleccionada
        ~Coche(); 

        //Aplicaremos el algoritmo de A*
}