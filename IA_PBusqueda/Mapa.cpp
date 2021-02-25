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


//0 libre
//1 obstaculo
//2 entrada
//3 salida
//4 coche
//5 visitado

#include "Mapa.h"

//Constructor por defecto
Mapa::Mapa(int n, int m):
    n_(n),
    m_(m)
{
    topologia_.resize(n_);
    for(int i=0; i<n_; i++) {
        topologia_[i].resize(m_);
    }

    for(int i=0; i<n_; i++){
     for(int j=0; j<m_; j++){
         topologia_[i][j] = 0;
     }
    }

}

// Destructor del coche 
Mapa::~Mapa(void){}

void Mapa::Modificar_obstaculo(int x, int y) {
    if(topologia_[x][y] != 1) {
        topologia_[x][y] = 1;
    }
    else {
        topologia_[x][y] = 0;
    }
} 

void Mapa::Modificar_entrada(int x, int y) {
    for(int i=0; i<n_; i++){
     for(int j=0; j<m_; j++){
         if(topologia_[i][j] == 2) {
             topologia_[i][j] = 0;
         }
     }
    }
    topologia_[x][y] = 2;
}

void Mapa::Modificar_salida(int x, int y) {
    for(int i=0; i<n_; i++){
     for(int j=0; j<m_; j++){
         if(topologia_[i][j] == 3) {
             topologia_[i][j] = 0;
         }
     }
    }
    topologia_[x][y] = 3;
}

void Mapa::Mostrar() {
    for(int i=0; i<n_; i++){
        for(int j=0; j<m_; j++){
            switch(topologia_[i][j]) {
                case 0: 
                    std::cout << " " ; 
                    break;
                case 1: 
                    std::cout << "█" ; 
                    break;
                case 2: 
                    std::cout << "I" ; 
                    break;
                case 3: 
                    std::cout << "F" ; 
                    break;
                case 4: 
                    std::cout << "C" ; 
                    break;
                case 5: 
                    std::cout << "." ; 
                    break;
            }
        }
        std::cout <<"\n";
    }
}    
    

    