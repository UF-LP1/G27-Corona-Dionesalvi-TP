/**
 * Project Untitled
 */


#include "cEmpleado.h"
#include "cCliente.h"

cEmpleado::cEmpleado(string nombre, string apellido, string DNI) :DNI(DNI) {
    this->nombre = nombre;
    this->apellido = apellido;

}

string cEmpleado::get_DNI()
{
    return this->DNI;
}


void recibir_cliente(cCliente* n) {

}

void trabajar(); 

cEmpleado::~cEmpleado() {

}