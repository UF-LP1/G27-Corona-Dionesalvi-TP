/**
 * Project Untitled
 */


#include "cLimpieza.h"

 /**
  * cLimpieza implementation
  */


  /**
   * @param string empresa_limpieza
   * @param string horarios
   */
cLimpieza::cLimpieza(string empresa_limpieza, string horarios) : cEmpleado(nombre, apellido, DNI) {

}

/**
 * @return void
 */
void cLimpieza::limpiar() {
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

/**
 * @param cCliente info
 * @return void
 */
void cLimpieza::contactar_cliente(cCliente info) {
    return;
}

cLimpieza::~cLimpieza() {

}