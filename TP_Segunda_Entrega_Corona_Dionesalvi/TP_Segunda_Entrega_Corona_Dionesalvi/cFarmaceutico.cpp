

#include "cFarmaceutico.h"


cFarmaceutico::cFarmaceutico(string matricula, string nombre, string apellido, string DNI) : cEmpleado(nombre, apellido, DNI), matricula(matricula) {
    
}

/**
 * @return void
 */


void cFarmaceutico::recomendacion_med() {
    return;
}

/**
 * @param cCliente info
 * @return void
 */
void cFarmaceutico::contactar_cliente(cCliente info) {
    return;
}

cFarmaceutico::~cFarmaceutico() {

}