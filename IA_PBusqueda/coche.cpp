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

#include "coche.h"

Coche::Coche(busqueda):
    busqueda_(busqueda),
    Sn_(0),
    Ss_(0),
    Se_(0),
    So_(0)
{}

void Coche::ActualizarSensores() {

}

void Coche::Busqueda() {
    switch(busqueda_) {}
}

Coche::~Coche() {}