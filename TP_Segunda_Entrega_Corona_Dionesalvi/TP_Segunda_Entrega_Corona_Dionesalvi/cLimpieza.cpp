/**
 * Project Untitled
 */


#include "cLimpieza.h"


cLimpieza::cLimpieza(string empresa_limpieza, string horarios) : cEmpleado(nombre, apellido, DNI) {

}

void cLimpieza::trabajar() {
    enum opciones { barrer, trapear, aspirar };

    srand(time(0));
    int i = 0 + rand() % (3) + 1;

    switch (i)
    {
    case 1: cout << " barriendo vereda" << endl;

    case 2: cout << "Trapeando sector 1" << endl;

    case 3: cout << "Aspirando deposito" << endl;

    default:
        break;
    }

    return;
}


cLimpieza::~cLimpieza() {

}