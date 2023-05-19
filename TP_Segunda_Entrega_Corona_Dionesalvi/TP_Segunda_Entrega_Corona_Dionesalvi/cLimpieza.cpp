/**
 * Project Untitled
 */


#include "cLimpieza.h"


cLimpieza::cLimpieza(string empresa_limpieza, eHorarios turnos, string nombre, string apellido, string DNI) : cEmpleado(nombre, apellido, DNI) {
    this->empresa_limpieza = empresa_limpieza;
    this->turnos = turnos;
}

float cLimpieza::trabajar() {
    enum opciones { barrer, trapear, aspirar };

    srand(time(0));
    int i = 0 + rand() % (3) + 1.0;

    switch (i)
    {
    case 1: cout << " barriendo vereda" << endl;
        break;

    case 2: cout << "Trapeando sector 1" << endl;
        break;

    case 3: cout << "Aspirando deposito" << endl;
        break;

    default:
        break;
    }

    return float(i);
}


cLimpieza::~cLimpieza() {

}