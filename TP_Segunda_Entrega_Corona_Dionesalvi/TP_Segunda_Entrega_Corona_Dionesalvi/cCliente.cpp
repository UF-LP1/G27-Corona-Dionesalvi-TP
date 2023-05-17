/**
 * Project Untitled
 */


#include "cCliente.h"


cCliente::cCliente(string nombre, string apellido, string DNI, string mail, string formatoticket, eOS OS, eFormadepago formadepago, string receta, list <string> productos_requeridos, float billetera, cCarrito carro, eListaNecesidad necesidad) {

}

string cCliente::get_mail() {
    return this->mail;
}


const string cCliente::get_DNI() {
    return this->DNI;
}


string cCliente::get_formatoticket() {
    return this->formatoticket;
}
void cCliente::restar_saldo_billetera(float nuevo_monto) {
    this->billetera -= nuevo_monto;
}
eOS cCliente:: get_OS() {
    return this->OS;
}
eListaNecesidad cCliente::get_necesidad() {

    return this->necesidad;
}

list <string> cCliente::get_lista_productos_requeridos() {
    return this-> productos_requeridos;
}




void cCliente::recibir_ticket(cMostrador n) {
    return;
}

void cCliente::recibir_bolsacompras(cCajero n) {
    return;
}
void agregar_lista_productos_requeridos();

cCarrito* cCliente::get_carro() {
    return &this->carro;
}

cCliente::~cCliente() {

}