/**
 * Project Untitled
 */


#include "cPerfumeros.h"


cPerfumeros::cPerfumeros(string credencial, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI),credencial(credencial) {
   
}

float cPerfumeros::trabajar() {

    srand(time(0));
    int i = 0 + rand() % (8) + 1;

    return static_cast<float>(i);
}


cPerfumeros::~cPerfumeros() {

}