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


#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include "Coche.h"

/*
2 min ejecución.
2 min resaltar aspectos importantes del código.
2 min presentar genéricamente el informe.
2 min preguntas extras.
*/

//La clase mapa recoge la información del fichero y crea el tablero y da la información
//a la clase coche (el coche llama a mapa)

class Mapa {   

    private:
        int n_, m_;
        std::vector<std::vector<int>> topologia_;

    public:
        Mapa(int n, int m);  
        void Modificar_obstaculo(int x, int y); 
        void Modificar_entrada(int x, int y); 
        void Modificar_salida(int x, int y);
        //Devolver pos() 
        
        void Mostrar(void); 
        ~Mapa();

    /*
        3x3
        ---
        121
        010
        002
    */

};

