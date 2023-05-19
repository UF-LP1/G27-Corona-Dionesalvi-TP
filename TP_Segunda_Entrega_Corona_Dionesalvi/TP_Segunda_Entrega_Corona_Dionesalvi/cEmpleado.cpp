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

    string a = n->get_DNI(); 
    eOS b = n-> get_OS();
    string c = n->get_formatoticket();
    eListaNecesidad d = n-> get_necesidad();
    list <string> e = n-> get_lista_productos_requeridos();
    cCarrito* f = n-> get_carro();
    string g = n-> get_nombre();
    float h = n-> get_billetera();

}

float trabajar();

cEmpleado::~cEmpleado() {

}