/**
 * Project Untitled
 */


#include "cOrtopedista.h"


cOrtopedista::cOrtopedista(string parte_del_cuerpo, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI) {
    this->parte_del_cuerpo = parte_del_cuerpo;
}

float cOrtopedista::trabajar() {
    srand(time(0));
    int i = 0   + rand()%(4)+1;
    
    return static_cast<float>(i);
}

cOrtopedista::~cOrtopedista() {

}